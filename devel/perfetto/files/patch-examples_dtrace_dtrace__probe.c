--- examples/dtrace/dtrace_probe.c.orig	2026-07-09 15:43:01 UTC
+++ examples/dtrace/dtrace_probe.c
@@ -0,0 +1,413 @@
+/*
+ * Copyright (C) 2026 The FreeBSD Foundation
+ *
+ * Portions of this file were written by Tom Jones (thj@freebsd.org) under
+ * sponsorship from The FreeBSD Foundation.
+ *
+ * Licensed under the Apache License, Version 2.0 (the "License");
+ * you may not use this file except in compliance with the License.
+ * You may obtain a copy of the License at
+ *
+ *      http://www.apache.org/licenses/LICENSE-2.0
+ *
+ * Unless required by applicable law or agreed to in writing, software
+ * distributed under the License is distributed on an "AS IS" BASIS,
+ * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
+ * See the License for the specific language governing permissions and
+ * limitations under the License.
+ */
+
+#include <err.h>
+#include <errno.h>
+#include <time.h>
+#include <unistd.h>
+
+#include <stdio.h>
+#include <stdlib.h>
+#include <dtrace.h>
+#include <sys/sysctl.h>
+#include <assert.h>
+
+#include <sys/types.h>
+#include <sys/sbuf.h>
+
+#include "perfetto/public/data_source.h"
+#include "perfetto/public/producer.h"
+#include "perfetto/public/pb_decoder.h"
+//#include "perfetto/public/protos/trace/system_info/cpu_info.pbzero.h"
+//#include "perfetto/public/protos/trace/sys_stats/sys_stats.pbzero.h"
+
+#include "perfetto/public/track_event.h"
+
+#define DTRACE_CONFIG			143
+#define DTRACE_CONFIG_FBT_PROBE		1
+#define DTRACE_CONFIG_KINST_PROBE	2
+
+struct dtrace_context {
+	dtrace_hdl_t				*g_dtp;
+	struct sbuf				*program_text;
+	dtrace_prog_t				*program;
+	struct PerfettoTeRegisteredTrack	*tracks;
+	bool 					setupandrunning;
+	uint32_t				fbt_events;
+	uint32_t				kinst_events;
+};
+
+static struct PerfettoDs custom = PERFETTO_DS_INIT();
+
+static uint64_t get_current_time_ns(void) {
+	struct timespec ts;
+
+	(void)clock_gettime(CLOCK_BOOTTIME, &ts);
+
+	return (((uint64_t)ts.tv_sec * 1000000000ULL) + ts.tv_nsec);
+}
+
+static void
+dfail(dtrace_hdl_t *g_dtp, const char *message, ...)
+{
+	va_list args;
+	va_start(args, message);
+	(void) fprintf(stderr, "dtrace_probe: ");
+	(void) vfprintf(stderr, message, args);
+	va_end(args);
+	(void) fprintf(stderr, ": %s %d\n",
+	dtrace_errmsg(g_dtp, dtrace_errno(g_dtp)), dtrace_errno(g_dtp));
+	exit(2);
+}
+
+static void * dtrace_on_setup_cb(struct PerfettoDsImpl *impl,
+    PerfettoDsInstanceIndex inst_id, void *ds_config,
+    size_t ds_config_size, void* user_arg, struct PerfettoDsOnSetupArgs *args) {
+
+    	(void)impl;
+    	(void)inst_id;
+    	(void)args;
+
+	int err;
+	struct dtrace_context *dctx = (struct dtrace_context *)user_arg;
+	int probes = 0;
+
+	dctx->program_text = sbuf_new_auto();
+	for (struct PerfettoPbDecoderIterator it =
+	    PerfettoPbDecoderIterateBegin(ds_config, ds_config_size);
+	    it.field.status == PERFETTO_PB_DECODER_OK;
+	    PerfettoPbDecoderIterateNext(&it)) {
+		if (it.field.wire_type == 2 && it.field.id == DTRACE_CONFIG) {
+			struct PerfettoPbDecoderDelimitedField *dval = &it.field.value.delimited;
+
+			for (struct PerfettoPbDecoderIterator dit =
+			    PerfettoPbDecoderIterateNestedBegin(*dval); 
+			    dit.field.status == PERFETTO_PB_DECODER_OK;
+	    		    PerfettoPbDecoderIterateNext(&dit)) {
+				if (dit.field.wire_type == 2) {
+
+					struct PerfettoPbDecoderDelimitedField *p = &dit.field.value.delimited;
+			 		switch (dit.field.id) {
+				    	case DTRACE_CONFIG_FBT_PROBE:
+
+						/* entry probe */
+						sbuf_printf(dctx->program_text, "fbt:kernel:");
+						sbuf_bcat(dctx->program_text, p->start, p->len);
+						sbuf_printf(dctx->program_text, ":entry\n");
+
+						probes++;
+
+						/* return probe */
+						sbuf_printf(dctx->program_text, "fbt:kernel:");
+						sbuf_bcat(dctx->program_text, p->start, p->len);
+						sbuf_printf(dctx->program_text, ":return\n");
+
+						probes++;
+						break;
+					case DTRACE_CONFIG_KINST_PROBE:
+
+						/* 
+						 * instruction probe
+						 * This can be a blank cheque
+						 * to add inst probes to the
+						 * kernel, but I can't see an
+						 * option that is less flexible
+						 * being useful.
+						 */
+						sbuf_printf(dctx->program_text, "kinst::");
+						sbuf_bcat(dctx->program_text, p->start, p->len);
+						sbuf_printf(dctx->program_text, "\n");
+
+						probes++;
+
+						break;
+					default:
+						printf("unsupported config type %d!\n", dit.field.id);
+						break;
+					}
+				}
+			}
+		}
+	}
+	sbuf_finish(dctx->program_text);
+	printf("Installed %d probes\n", probes);
+	printf("---------- dtrace program --------------------\n");
+	sbuf_putbuf(dctx->program_text);
+	printf("----------------------------------------------\n\n"); 
+
+	if ((dctx->g_dtp = dtrace_open(DTRACE_VERSION, 0, &err)) == NULL) {
+		printf("failed to initialize dtrace: %s\n",
+			dtrace_errmsg(NULL, err));
+		exit(1);
+	}
+
+	/* 
+	 * If we don't set a bufsize we will immediately get a failure due to
+	 * buffer exhaustion.
+	 */
+	if (dtrace_setopt(dctx->g_dtp, "bufsize", "10M") == -1)
+	        dfail(dctx->g_dtp, "failed to set 'bufsize'");
+
+	if (dtrace_setopt(dctx->g_dtp, "bufpolicy", "switch") == -1)
+	        dfail(dctx->g_dtp, "failed to set buffer policy 'switch'");
+
+	if ((dctx->program = dtrace_program_strcompile(dctx->g_dtp,
+	    sbuf_data(dctx->program_text), DTRACE_PROBESPEC_NAME, 0, 0, NULL)) == NULL) {
+		dfail(dctx->g_dtp, "failed to compile program");
+		exit(1);
+	}
+
+	dtrace_proginfo_t info;
+	if (dtrace_program_exec(dctx->g_dtp, dctx->program, &info) == -1) {
+		dfail(dctx->g_dtp, "failed to enable probes");
+		exit(1);
+	}
+
+	if (dtrace_go(dctx->g_dtp) != 0) {
+		dfail(dctx->g_dtp, "couldn't start tracing\n");
+		exit(1);
+	}
+
+	/*
+	 * Set up a track for each cpu .
+	 * XXX: TODO hardcode my cores (nproc=16)
+	 */
+	struct PerfettoTeRegisteredTrack *cpu_tracks =
+	    calloc(sizeof(struct PerfettoTeRegisteredTrack), 16);
+	dctx->tracks = cpu_tracks;
+	for (int i = 0; i < 16; i++) {
+
+		struct sbuf *name = sbuf_new_auto();
+
+		sbuf_printf(name, "CPU %d", i);
+		sbuf_finish(name);
+//		printf("registering uuid \t%s\n", sbuf_data(name));
+		PerfettoTeNamedTrackRegister(cpu_tracks, sbuf_data(name),
+		    i, PerfettoTeGlobalTrackUuid(), true);
+//		printf("uuid %lx\n", cpu_tracks->impl.uuid);
+		sbuf_delete(name);
+		cpu_tracks++;
+	}
+
+
+	/* 
+	 * XXX: We end up with both inst_ctx and user arg being the same struct
+	 *      dtrace_context *.
+	 */
+	return (void *)dctx;
+
+}
+
+static void dtrace_on_start_cb(struct PerfettoDsImpl* impl,
+    PerfettoDsInstanceIndex inst_id, void* user_arg,
+    void* inst_ctx, struct PerfettoDsOnStartArgs* args) {
+
+	(void)impl;
+	(void)inst_id;
+	(void)inst_ctx;
+	(void)args;
+
+	struct dtrace_context *dctx = (struct dtrace_context *)user_arg;
+	dctx->setupandrunning = true;
+}
+
+static void dtrace_on_stop_cb(struct PerfettoDsImpl *impl,
+    PerfettoDsInstanceIndex inst_id, void* user_arg, void* inst_ctx,
+    struct PerfettoDsOnStopArgs* args) {
+
+	(void)impl;
+	(void)inst_id;
+	(void)user_arg;
+	(void)inst_ctx;
+	(void)args;
+
+
+	struct dtrace_context *dctx = (struct dtrace_context *)user_arg;
+
+	printf("%s\tfbt events: %u kinst events: %u\n", __func__, dctx->fbt_events, dctx->kinst_events);
+
+	dctx->setupandrunning = false;
+	dtrace_stop(dctx->g_dtp);
+
+	dctx->program = NULL;
+	sbuf_delete(dctx->program_text);
+
+	struct PerfettoTeRegisteredTrack *tracks = dctx->tracks;
+	for (int i = 0; i < 16; i++) {
+		PerfettoTeRegisteredTrackUnregister(tracks);
+		tracks++;
+	}
+
+	free(dctx->tracks);
+	dctx->tracks = NULL;
+
+}
+
+static void dtrace_on_destroy_cb(struct PerfettoDsImpl *impl,
+    void* user_arg, void* inst_ctx) {
+
+	(void)impl;
+	(void)user_arg;
+	(void)inst_ctx;
+
+	printf("%s\n", __func__);
+}
+
+static int
+process_record(const dtrace_probedata_t *data, const dtrace_recdesc_t *rec, void *arg)
+{
+	(void)rec;
+
+	struct dtrace_context *dctx = (struct dtrace_context *)arg;
+
+        dtrace_probedesc_t *pd = data->dtpda_pdesc;
+        processorid_t cpu = data->dtpda_cpu;
+	uint64_t track_uuid;
+#if 0
+	printf("%3d uuid 0x%lx ts %zd str %s %s:%s\n",
+	    cpu, track_uuid, data->dtpda_timestamp,
+	    sbuf_data(tn), pd->dtpd_func, pd->dtpd_name);
+#endif
+        //uintptr_t addr;
+#if 0
+        dtrace_actkind_t act;
+        if (rec == NULL) {
+                return (DTRACE_CONSUME_NEXT);
+        }
+        act = rec->dtrd_action;
+printf("%s:%d\n", __func__, __LINE__);
+        //addr = (uintptr_t)data->dtpda_data;
+        if (act == DTRACEACT_EXIT) {
+                //g_status = *((uint32_t *)addr);
+                return (DTRACE_CONSUME_NEXT);
+        }
+#endif
+	PERFETTO_DS_TRACE(custom, ctx) {
+		struct PerfettoDsRootTracePacket root;
+		PerfettoDsTracerPacketBegin(&ctx, &root);
+
+		/* XXX: this is a free running nanotime counter from "some point in time" */
+		perfetto_protos_TracePacket_set_timestamp(&root.msg, get_current_time_ns());
+
+		perfetto_protos_TracePacket_set_timestamp(&root.msg, data->dtpda_timestamp);
+		//perfetto_protos_TracePacket_set_timestamp_clock_id(&root.msg, XXX);
+
+		{
+			struct perfetto_protos_TrackEvent te;
+			perfetto_protos_TracePacket_begin_track_event(&root.msg, &te);
+			
+			/* Set track name */
+			/* XXX: TODO This should be an internened track name */
+			struct sbuf *tn = sbuf_new_auto();
+
+			sbuf_printf(tn, "CPU %d", cpu);
+			sbuf_finish(tn);
+			track_uuid = PerfettoTeNamedTrackUuid(sbuf_data(tn), cpu,
+			    PerfettoTeGlobalTrackUuid());
+			perfetto_protos_TrackEvent_set_name(&te, sbuf_data(tn), sbuf_len(tn));
+			//perfetto_protos_TrackEvent_set_name_iid(&te, cpu);
+			sbuf_delete(tn);
+	
+			perfetto_protos_TrackEvent_set_track_uuid(&te, track_uuid);
+			perfetto_protos_TrackEvent_set_timestamp_absolute_us(&te, data->dtpda_cpu/1000);
+
+			struct sbuf *cat = sbuf_new_auto();
+			sbuf_printf(cat, "%s:%s", pd->dtpd_provider, pd->dtpd_func);
+			sbuf_finish(cat);
+			perfetto_protos_TrackEvent_set_categories(&te, sbuf_data(cat), sbuf_len(cat));
+			sbuf_delete(cat);
+
+#define	TYPE_UNSPECIFIED 	0 	
+#define	TYPE_SLICE_BEGIN	1 	
+#define	TYPE_SLICE_END		2 	
+#define	TYPE_INSTANT		3
+#define	TYPE_COUNTER		4
+
+			if(strcmp(pd->dtpd_provider, "kinst") == 0) {
+				dctx->kinst_events++;
+				perfetto_protos_TrackEvent_set_type(&te, TYPE_INSTANT);
+			} else if(strcmp(pd->dtpd_provider, "fbt") == 0) {
+				dctx->fbt_events++;
+				if (strcmp(pd->dtpd_name, "entry") == 0)
+					perfetto_protos_TrackEvent_set_type(&te, TYPE_SLICE_BEGIN);
+				else
+					perfetto_protos_TrackEvent_set_type(&te, TYPE_SLICE_END);
+			}
+			perfetto_protos_TracePacket_end_track_event(&root.msg, &te);
+		}
+
+		PerfettoDsTracerPacketEnd(&ctx, &root);
+//		PerfettoDsTracerFlush(&ctx, NULL, NULL);
+	}
+        return (DTRACE_CONSUME_THIS);
+}
+
+int main(void) {
+	struct PerfettoProducerInitArgs args = PERFETTO_PRODUCER_INIT_ARGS_INIT();
+	struct PerfettoDsParams ds_params;
+	struct dtrace_context dctx;
+
+	args.backends = PERFETTO_BACKEND_SYSTEM;
+	PerfettoProducerInit(args);
+
+	/* Initialise the default parameters */
+	ds_params = PerfettoDsParamsDefault();
+
+	/* Life cycle call backs */
+	ds_params.on_start_cb = dtrace_on_start_cb;
+	ds_params.on_setup_cb = dtrace_on_setup_cb;
+	ds_params.on_stop_cb = dtrace_on_stop_cb;
+	ds_params.on_destroy_cb = dtrace_on_destroy_cb;
+	ds_params.user_arg = &dctx;
+
+	PerfettoDsRegister(&custom, "dtrace", ds_params);
+
+	/* 
+	 * XXX: TODO We should check priviliges here before trying to create dtrace
+	 * probs later when we are setup and configured
+	 */
+
+	/* Sit in a loop */
+	for (;;) {
+		/* 
+		 * If we aren't running sleep for 250 mS, that puts some extra
+		 * latency on start, but will be fine for testing.
+		 */
+		if (!dctx.setupandrunning) {
+			usleep(250 * 1000);
+			continue;
+		}
+		
+		/* 
+		 * dtrace work loop 
+		 */
+		switch (dtrace_work(dctx.g_dtp, stdout, NULL, process_record, &dctx)) {
+		case DTRACE_WORKSTATUS_DONE:
+			//done = 1;
+			break;
+		case DTRACE_WORKSTATUS_OKAY:
+			break;
+		default:
+			if (dtrace_errno(dctx.g_dtp) != EINTR)
+				dfail(dctx.g_dtp, "processing aborted");
+		}
+
+		dtrace_sleep(dctx.g_dtp);
+	}
+}
