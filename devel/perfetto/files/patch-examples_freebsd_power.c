--- examples/freebsd/power.c.orig	2026-07-09 15:43:01 UTC
+++ examples/freebsd/power.c
@@ -0,0 +1,494 @@
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
+#include <fcntl.h>
+#include <sys/sysctl.h>
+#include <sys/ioctl.h>
+#include <assert.h>
+
+#include <sys/types.h>
+#include <sys/sbuf.h>
+#include "/usr/include/dev/acpica/acpiio.h"
+
+#include "perfetto/public/data_source.h"
+#include "perfetto/public/producer.h"
+#include "perfetto/public/pb_decoder.h"
+#include "perfetto/public/protos/trace/power/battery_counters.pzc.h"
+#include "perfetto/public/protos/trace/power/power_rails.pzc.h"
+
+#include "perfetto/public/track_event.h"
+
+#define BATTERY	1
+#define RAPL	1
+
+#define ACPIDEV         "/dev/acpi"
+/* should be a acpi define, but doesn't appear to be */
+#define UNKNOWN_CAP 0xffffffff
+#define UNKNOWN_VOLTAGE 0xffffffff
+
+static struct PerfettoDs custom = PERFETTO_DS_INIT();
+
+struct power_context {
+	bool		running;
+	uint32_t	flags;
+#define PWR_FLAG_ACPIBATTERY	1
+#define PWR_FLAG_RAPL		2
+	int		acpifd;
+	union acpi_battery_ioctl_arg acpibi;
+
+	int		pp0_mib[4];
+	size_t		pp0_mib_len;
+	uint64_t	pp0;
+
+	int		pp1_mib[4];
+	size_t		pp1_mib_len;
+	uint64_t	pp1;
+
+	int		platform_mib[4];
+	size_t		platform_mib_len;
+	uint64_t 	platform;
+
+	int		dram_mib[4];
+	size_t		dram_mib_len;
+	uint64_t	dram;
+
+	uint64_t	battery_cap;
+	uint64_t	battery_charge;
+	uint64_t	battery_rate;
+	uint64_t	battery_voltage;
+
+};
+
+int take_battery_reading(struct power_context *pwrctx, int);
+void take_rapl_reading(struct power_context *pwrctx);
+
+static uint64_t get_current_time_ns(void) {
+	struct timespec ts;
+
+	(void)clock_gettime(CLOCK_BOOTTIME, &ts);
+
+	return (((uint64_t)ts.tv_sec * 1000000000ULL) + ts.tv_nsec);
+}
+
+static void * fbsd_power_on_setup_cb(struct PerfettoDsImpl *impl,
+    PerfettoDsInstanceIndex inst_id, void *ds_config,
+    size_t ds_config_size, void* user_arg, struct PerfettoDsOnSetupArgs *args) {
+
+    	(void)impl;
+    	(void)inst_id;
+	(void)ds_config;
+	(void)ds_config_size;
+    	(void)args;
+
+	struct power_context *pwrctx = (struct power_context *)user_arg;
+
+	pwrctx->acpifd = open(ACPIDEV, O_RDONLY);
+	if (pwrctx->acpifd != -1) {
+		pwrctx->acpibi.unit = 0;    // TODO get this from the configuration object
+		if (ioctl(pwrctx->acpifd, ACPIIO_BATT_GET_BST, &pwrctx->acpibi) != -1) {
+			if (pwrctx->acpibi.bst.state != ACPI_BATT_STAT_NOT_PRESENT) {
+				pwrctx->flags |= PWR_FLAG_ACPIBATTERY;
+				printf("ACPI Battery: Battery %d voltage %d\n",
+				    pwrctx->acpibi.unit, pwrctx->acpibi.bst.volt);
+			} else {
+				printf("ACPI Battery: Battery %d not present\n",
+				    pwrctx->acpibi.unit);
+			}
+		}
+	} else {
+			printf("ACPI Battery: failed to open %s\n", ACPIDEV);
+	}
+
+	/* Fill out the components of the mib. */
+	pwrctx->pp0_mib_len = 4;
+	if (sysctlnametomib("dev.intel_rapl.0.pp0", pwrctx->pp0_mib,
+	    &pwrctx->pp0_mib_len) == -1) {
+		printf("Couldn't read RAPL pp0\n");
+		goto out;
+	}
+
+	pwrctx->pp1_mib_len = 4;
+	if (sysctlnametomib("dev.intel_rapl.0.pp1", pwrctx->pp1_mib,
+	    &pwrctx->pp1_mib_len) == -1) {
+		printf("Couldn't read RAPL pp1\n");
+		goto out;
+	}
+
+	pwrctx->platform_mib_len = 4;
+	if (sysctlnametomib("dev.intel_rapl.0.platform", pwrctx->platform_mib,
+	    &pwrctx->platform_mib_len) == -1) {
+		printf("Couldn't read RAPL platform\n");
+		goto out;
+	}
+
+	pwrctx->dram_mib_len = 4;
+	if (sysctlnametomib("dev.intel_rapl.0.dram", pwrctx->dram_mib,
+	    &pwrctx->dram_mib_len) == -1) {
+		printf("Couldn't read RAPL dram\n");
+		goto out;
+	}
+
+	pwrctx->flags |= PWR_FLAG_RAPL;
+out:
+	printf("freebsd power: %s %s\n",
+	    pwrctx->flags & PWR_FLAG_ACPIBATTERY ? "PWR_FLAG_ACPIBATTERY" : "",
+	    pwrctx->flags & PWR_FLAG_RAPL ? "PWR_FLAG_RAPL" : "");
+	return (void *)pwrctx;;
+
+}
+
+static void fbsd_power_on_start_cb(struct PerfettoDsImpl* impl,
+    PerfettoDsInstanceIndex inst_id, void* user_arg,
+    void* inst_ctx, struct PerfettoDsOnStartArgs* args) {
+
+	(void)impl;
+	(void)inst_id;
+	(void)user_arg;
+	(void)inst_ctx;
+	(void)args;
+
+	printf("%s\n", __func__);
+
+	struct power_context *pwrctx = (struct power_context *)user_arg;
+	pwrctx->running = true;
+}
+
+static void fbsd_power_on_stop_cb(struct PerfettoDsImpl *impl,
+    PerfettoDsInstanceIndex inst_id, void* user_arg, void* inst_ctx,
+    struct PerfettoDsOnStopArgs* args) {
+
+	(void)impl;
+	(void)inst_id;
+	(void)user_arg;
+	(void)inst_ctx;
+	(void)args;
+
+	printf("%s\n", __func__);
+
+	struct power_context *pwrctx = (struct power_context *)user_arg;
+	pwrctx->running = false;
+}
+
+static void fbsd_power_on_destroy_cb(struct PerfettoDsImpl *impl,
+    void* user_arg, void* inst_ctx) {
+
+	(void)impl;
+	(void)user_arg;
+	(void)inst_ctx;
+
+	printf("%s\n", __func__);
+}
+
+int
+take_battery_reading(struct power_context *pwrctx, int idx)
+{
+
+	if (idx < 0 || idx > 64)                                   
+		printf("invalid battery %d", idx);
+
+	/* Print battery design information. */                    
+	pwrctx->acpibi.unit = idx;
+	if (ioctl(pwrctx->acpifd, ACPIIO_BATT_GET_BATTINFO, &pwrctx->acpibi) == -1) {
+		printf("get battery info (%d) failed", idx);
+		return 0;
+	}
+
+	pwrctx->battery_cap = pwrctx->acpibi.battinfo.cap;
+	pwrctx->battery_charge = (((pwrctx->acpibi.battinfo.cap * pwrctx->acpibi.bif.lfcap) / 100)*1000);
+	pwrctx->battery_rate = (pwrctx->acpibi.battinfo.rate * 1000);
+	pwrctx->battery_voltage = pwrctx->acpibi.bst.volt * 1000;
+
+	return 1;
+}
+
+void
+take_rapl_reading(struct power_context *pwrctx)
+{
+	uint64_t value;//, reading;
+	size_t len;
+
+	value = 0;
+	len = sizeof(value);
+
+	if (sysctl(pwrctx->pp0_mib, pwrctx->pp0_mib_len, &value, &len, NULL, 0) == -1) {
+		perror("ERROR: sysctl pp0");
+		return;
+	}
+	pwrctx->pp0 = value;
+
+	if (sysctl(pwrctx->pp1_mib, pwrctx->pp1_mib_len, &value, &len, NULL, 0) == -1) {
+		perror("ERROR: sysctl pp1");
+		return;
+	}
+	pwrctx->pp1 = value;
+
+	if (sysctl(pwrctx->platform_mib, pwrctx->platform_mib_len, &value, &len, NULL, 0) == -1) {
+		perror("ERROR: sysctl platform");
+		return;
+	}
+	pwrctx->platform = value;
+
+	if (sysctl(pwrctx->dram_mib, pwrctx->dram_mib_len, &value, &len, NULL, 0) == -1) {
+		perror("ERROR: sysctl dram");
+		return;
+	}
+	pwrctx->dram = value;
+}
+
+int main(void) {
+	struct PerfettoProducerInitArgs args = PERFETTO_PRODUCER_INIT_ARGS_INIT();
+	struct PerfettoDsParams ds_params;
+	struct power_context pwrctx;
+
+	args.backends = PERFETTO_BACKEND_SYSTEM;
+	PerfettoProducerInit(args);
+
+	/* Initialise the default parameters */
+	ds_params = PerfettoDsParamsDefault();
+
+	/* Life cycle call backs */
+	ds_params.on_start_cb = fbsd_power_on_start_cb;
+	ds_params.on_setup_cb = fbsd_power_on_setup_cb;
+	ds_params.on_stop_cb = fbsd_power_on_stop_cb;
+	ds_params.on_destroy_cb = fbsd_power_on_destroy_cb;
+	ds_params.user_arg = &pwrctx;
+
+	PerfettoDsRegister(&custom, "freebsd.power", ds_params);
+
+#if BATTERY
+	/* Take an inital readings to set up last */
+	take_battery_reading(&pwrctx, 0 /* TODO: index */);
+#endif
+#if 0
+	/*
+	 * XXX: The documentation for power rails says we should only have to
+	 * emit the descriptive elements once at the start of the trace. When
+	 * we do this from the SDK we end up getting no valid values in the
+	 * resulting dataset. I suspect there is *something* missing here, but
+	 * I'm not sure where to look to figure that out right now.
+	 */
+	take_rapl_reading(&pwrctx);
+
+	PERFETTO_DS_TRACE(custom, ctx) {
+		struct PerfettoDsRootTracePacket root;
+		struct perfetto_protos_PowerRails rail;
+		struct perfetto_protos_PowerRails_RailDescriptor rd;
+
+		PerfettoDsTracerPacketBegin(&ctx, &root);
+		perfetto_protos_TracePacket_set_timestamp(&root.msg, get_current_time_ns());
+
+		perfetto_protos_TracePacket_begin_power_rails(&root.msg, &rail);
+		perfetto_protos_PowerRails_set_session_uuid(&rail, 1024);
+
+		perfetto_protos_PowerRails_begin_rail_descriptor(&rail, &rd);
+		
+		perfetto_protos_PowerRails_RailDescriptor_set_index(&rd, 0);
+		perfetto_protos_PowerRails_RailDescriptor_set_rail_name(&rd, "rapl_pp0", sizeof("rapl_pp0"));
+		perfetto_protos_PowerRails_RailDescriptor_set_subsys_name(&rd, "rapl", sizeof("rapl"));
+		perfetto_protos_PowerRails_RailDescriptor_set_sampling_rate(&rd, 1000);
+
+		perfetto_protos_PowerRails_end_rail_descriptor(&rail, &rd);
+		perfetto_protos_TracePacket_end_power_rails(&root.msg, &rail);
+
+		perfetto_protos_TracePacket_begin_power_rails(&root.msg, &rail);
+		perfetto_protos_PowerRails_set_session_uuid(&rail, 1024);
+
+		perfetto_protos_PowerRails_begin_rail_descriptor(&rail, &rd);
+		
+		perfetto_protos_PowerRails_RailDescriptor_set_index(&rd, 1);
+		perfetto_protos_PowerRails_RailDescriptor_set_rail_name(&rd, "rapl_platform", sizeof("rapl_platform"));
+		perfetto_protos_PowerRails_RailDescriptor_set_subsys_name(&rd, "rapl", sizeof("rapl"));
+		perfetto_protos_PowerRails_RailDescriptor_set_sampling_rate(&rd, 1000);
+
+		perfetto_protos_PowerRails_end_rail_descriptor(&rail, &rd);
+		perfetto_protos_TracePacket_end_power_rails(&root.msg, &rail);
+
+		PerfettoDsTracerPacketEnd(&ctx, &root);
+	}
+#endif
+	/* Sit in a loop */
+	for (;;) {
+		/* If we haven't started or nothing has configured take a break */
+		if (!pwrctx.running || pwrctx.flags == 0) {
+			usleep(1000*1000);
+			continue;
+		} else {
+			usleep(1000);	// TODO: This should be configured
+		}
+
+#if RAPL
+		PERFETTO_DS_TRACE(custom, ctx) {
+			struct PerfettoDsRootTracePacket root;
+			struct perfetto_protos_PowerRails rail;
+			struct perfetto_protos_PowerRails_EnergyData e;
+			struct perfetto_protos_PowerRails_RailDescriptor rd;
+
+			if (pwrctx.flags & PWR_FLAG_RAPL) {
+				take_rapl_reading(&pwrctx);
+
+				/* pp0 */
+				PerfettoDsTracerPacketBegin(&ctx, &root);
+				perfetto_protos_TracePacket_set_timestamp(&root.msg, get_current_time_ns());
+
+				perfetto_protos_TracePacket_begin_power_rails(&root.msg, &rail);
+				perfetto_protos_PowerRails_set_session_uuid(&rail, 1024);
+
+				perfetto_protos_PowerRails_begin_rail_descriptor(&rail, &rd);
+				perfetto_protos_PowerRails_RailDescriptor_set_index(&rd, 0);
+				perfetto_protos_PowerRails_RailDescriptor_set_rail_name(&rd,
+				    "pp0", sizeof("pp0"));
+				perfetto_protos_PowerRails_RailDescriptor_set_subsys_name(&rd,
+				    "rapl", sizeof("rapl"));
+				perfetto_protos_PowerRails_RailDescriptor_set_sampling_rate(&rd, 1000);
+				perfetto_protos_PowerRails_end_rail_descriptor(&rail, &rd);
+
+				perfetto_protos_PowerRails_begin_energy_data(&rail, &e);
+				perfetto_protos_PowerRails_EnergyData_set_index(&e, 0);
+				perfetto_protos_PowerRails_EnergyData_set_timestamp_ms(&e,
+				    get_current_time_ns()/1000000);
+				perfetto_protos_PowerRails_EnergyData_set_energy(&e, pwrctx.pp0);
+
+				perfetto_protos_TracePacket_end_power_rails(&root.msg, &rail);
+				PerfettoDsTracerPacketEnd(&ctx, &root);
+
+				/* pp1 */
+				PerfettoDsTracerPacketBegin(&ctx, &root);
+				perfetto_protos_TracePacket_set_timestamp(&root.msg, get_current_time_ns());
+
+				perfetto_protos_TracePacket_begin_power_rails(&root.msg, &rail);
+				perfetto_protos_PowerRails_set_session_uuid(&rail, 1024);
+
+				perfetto_protos_PowerRails_begin_rail_descriptor(&rail, &rd);
+				perfetto_protos_PowerRails_RailDescriptor_set_index(&rd, 1);
+				perfetto_protos_PowerRails_RailDescriptor_set_rail_name(&rd,
+				    "pp1", sizeof("pp1"));
+				perfetto_protos_PowerRails_RailDescriptor_set_subsys_name(&rd,
+				    "rapl", sizeof("rapl"));
+				perfetto_protos_PowerRails_RailDescriptor_set_sampling_rate(&rd, 1000);
+				perfetto_protos_PowerRails_end_rail_descriptor(&rail, &rd);
+
+				perfetto_protos_PowerRails_begin_energy_data(&rail, &e);
+				perfetto_protos_PowerRails_EnergyData_set_index(&e, 1);
+				perfetto_protos_PowerRails_EnergyData_set_timestamp_ms(&e,
+				    get_current_time_ns()/1000000);
+				perfetto_protos_PowerRails_EnergyData_set_energy(&e, pwrctx.platform);
+				perfetto_protos_PowerRails_end_energy_data(&rail, &e);
+
+				perfetto_protos_TracePacket_end_power_rails(&root.msg, &rail);
+				PerfettoDsTracerPacketEnd(&ctx, &root);
+
+				/* platform */
+				PerfettoDsTracerPacketBegin(&ctx, &root);
+				perfetto_protos_TracePacket_set_timestamp(&root.msg, get_current_time_ns());
+
+				perfetto_protos_TracePacket_begin_power_rails(&root.msg, &rail);
+				perfetto_protos_PowerRails_set_session_uuid(&rail, 1024);
+
+				perfetto_protos_PowerRails_begin_rail_descriptor(&rail, &rd);
+				perfetto_protos_PowerRails_RailDescriptor_set_index(&rd, 1);
+				perfetto_protos_PowerRails_RailDescriptor_set_rail_name(&rd,
+				    "platform", sizeof("platform"));
+				perfetto_protos_PowerRails_RailDescriptor_set_subsys_name(&rd,
+				    "rapl", sizeof("rapl"));
+				perfetto_protos_PowerRails_RailDescriptor_set_sampling_rate(&rd, 1000);
+				perfetto_protos_PowerRails_end_rail_descriptor(&rail, &rd);
+
+				perfetto_protos_PowerRails_begin_energy_data(&rail, &e);
+				perfetto_protos_PowerRails_EnergyData_set_index(&e, 1);
+				perfetto_protos_PowerRails_EnergyData_set_timestamp_ms(&e,
+				    get_current_time_ns()/1000000);
+				perfetto_protos_PowerRails_EnergyData_set_energy(&e, pwrctx.platform);
+				perfetto_protos_PowerRails_end_energy_data(&rail, &e);
+
+				perfetto_protos_TracePacket_end_power_rails(&root.msg, &rail);
+				PerfettoDsTracerPacketEnd(&ctx, &root);
+
+				/* dram */
+				PerfettoDsTracerPacketBegin(&ctx, &root);
+				perfetto_protos_TracePacket_set_timestamp(&root.msg, get_current_time_ns());
+
+				perfetto_protos_TracePacket_begin_power_rails(&root.msg, &rail);
+				perfetto_protos_PowerRails_set_session_uuid(&rail, 1024);
+
+				perfetto_protos_PowerRails_begin_rail_descriptor(&rail, &rd);
+				perfetto_protos_PowerRails_RailDescriptor_set_index(&rd, 1);
+				perfetto_protos_PowerRails_RailDescriptor_set_rail_name(&rd,
+				    "dram", sizeof("dram"));
+				perfetto_protos_PowerRails_RailDescriptor_set_subsys_name(&rd,
+				    "rapl", sizeof("rapl"));
+				perfetto_protos_PowerRails_RailDescriptor_set_sampling_rate(&rd, 1000);
+				perfetto_protos_PowerRails_end_rail_descriptor(&rail, &rd);
+
+				perfetto_protos_PowerRails_begin_energy_data(&rail, &e);
+				perfetto_protos_PowerRails_EnergyData_set_index(&e, 1);
+				perfetto_protos_PowerRails_EnergyData_set_timestamp_ms(&e,
+				    get_current_time_ns()/1000000);
+				perfetto_protos_PowerRails_EnergyData_set_energy(&e, pwrctx.platform);
+				perfetto_protos_PowerRails_end_energy_data(&rail, &e);
+
+				perfetto_protos_TracePacket_end_power_rails(&root.msg, &rail);
+				PerfettoDsTracerPacketEnd(&ctx, &root);
+			}
+		}
+#endif
+#if BATTERY
+		PERFETTO_DS_TRACE(custom, ctx) {
+			struct PerfettoDsRootTracePacket root;
+			struct perfetto_protos_BatteryCounters bat;
+
+			if (pwrctx.flags & PWR_FLAG_ACPIBATTERY) {
+				take_battery_reading(&pwrctx, 0 /* TODO: battery index */);
+
+				PerfettoDsTracerPacketBegin(&ctx, &root);
+				perfetto_protos_TracePacket_set_timestamp(&root.msg, get_current_time_ns());
+
+				perfetto_protos_TracePacket_begin_battery(&root.msg, &bat);
+
+				perfetto_protos_BatteryCounters_set_name(&bat, "acpi0", sizeof("acpi0"));
+
+				if (pwrctx.acpibi.bif.units == ACPI_BIF_UNITS_MW) {
+					/* TODO */
+				} else {
+					perfetto_protos_BatteryCounters_set_charge_counter_uah(&bat, 
+					    pwrctx.battery_charge);	/* power in ui */
+					perfetto_protos_BatteryCounters_set_current_avg_ua(&bat,
+					    pwrctx.battery_rate);
+					perfetto_protos_BatteryCounters_set_current_ua(&bat,
+					    pwrctx.battery_rate);
+
+				}
+
+				perfetto_protos_BatteryCounters_set_capacity_percent(&bat, pwrctx.battery_cap);
+				perfetto_protos_BatteryCounters_set_voltage_uv(&bat, pwrctx.battery_voltage);
+				perfetto_protos_TracePacket_end_battery(&root.msg, &bat);
+
+				PerfettoDsTracerPacketEnd(&ctx, &root);
+			}
+		}
+#endif
+
+	}
+}
