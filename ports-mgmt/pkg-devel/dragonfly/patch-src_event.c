--- src/event.c.orig	2016-10-15 20:59:04 UTC
+++ src/event.c
@@ -524,7 +524,10 @@ draw_progressbar(int64_t current, int64_
 
 			humanize_number(buf, sizeof(buf),
 			    current,"B", HN_AUTOSCALE, HN_IEC_PREFIXES);
-			printf(" %*s", (int)sizeof(buf), buf);
+			if (current < 1000)
+				printf(" %*s  ", (int)sizeof(buf) - 2, buf);
+			else
+				printf(" %*s", (int)sizeof(buf), buf);
 
 			if (bytes_left > 0)
 				format_rate_SI(buf, sizeof(buf), transferred);
@@ -580,6 +583,7 @@ event_callback(void *data, struct pkg_ev
 	int *debug = data, i;
 	struct pkg_event_conflict *cur_conflict;
 	const char *filename, *reponame;
+	char trunc_filename[42] = { 0 };
 
 	if (msg_buf == NULL) {
 		msg_buf = sbuf_new_auto();
@@ -637,9 +641,12 @@ event_callback(void *data, struct pkg_ev
 			 */
 			filename = ev->e_fetching.url;
 		}
+		strncpy(trunc_filename, filename, 41);
+		if (strnlen(filename,42) > 41)
+			trunc_filename[40] = '*';
 		job_status_begin(msg_buf);
 		progress_debit = true;
-		sbuf_printf(msg_buf, "Fetching %s", filename);
+		sbuf_printf(msg_buf, "%-41s", trunc_filename);
 
 		break;
 	case PKG_EVENT_FETCH_FINISHED:
