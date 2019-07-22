--- panel-plugin/devperf.c.orig	2017-02-25 09:57:00 UTC
+++ panel-plugin/devperf.c
@@ -228,6 +228,84 @@ int main ()
 
 	/**************************	Linux End	***************/
 
+#elif defined(__DragonFly__)
+#include <sys/param.h>
+#include <sys/sysctl.h>
+#include <sys/types.h>
+#include <sys/errno.h>
+#include <sys/resource.h>
+#include <sys/time.h>
+#include <devstat.h>
+#include <fcntl.h>
+#include <limits.h>
+#include <string.h>
+#include <syslog.h>
+#include <stdarg.h>
+
+#define MAXNAMELEN 256
+
+int DevPerfInit ()
+{
+	return (0);
+}
+
+int DevCheckStatAvailability(char const **strptr)
+{
+	return (0);
+}
+
+int DevGetPerfData (const void *p_pvDevice, struct devperf_t *perf)
+{
+	struct devinfo dinfo;
+	struct statinfo stats = {.dinfo = &dinfo};
+	char *check_dev = (char *) p_pvDevice;
+	struct devstat dev;
+	struct timeval tv;
+	int found, i;
+
+	if (getdevs(&stats) == -1) {
+		syslog(0, "DISKPERF: getdevs fail");
+		return (-1);
+	}
+
+	for(found = 0, i = 0; i < (stats.dinfo)->numdevs; i++) {
+		char dev_name[MAXNAMELEN];
+		dev = (stats.dinfo)->devices[i];
+		snprintf(dev_name, MAXNAMELEN-1, "%s%d",
+				dev.device_name, dev.unit_number);
+		if ((check_dev != NULL) && (strcmp(check_dev, dev_name) != 0))
+			continue;
+		else {
+			found = 1;
+			break;
+		}
+
+	}
+	if(check_dev != NULL && found) {
+		perf->wbytes = dev.bytes_written;
+		perf->rbytes = dev.bytes_read;
+		gettimeofday (&tv, 0);
+		perf->timestamp_ns = (uint64_t)1000ull * 1000ull * 1000ull *
+			tv.tv_sec + 1000ull * tv.tv_usec;
+		perf->qlen = dev.busy_count;
+		// I'm not sure about rbusy and wbusy calculation
+		perf->rbusy_ns = (uint64_t) dev.busy_time.tv_usec * 1000ull;
+		perf->wbusy_ns = perf->rbusy_ns;
+	}
+	return (0);
+}
+
+#if 0				/* Standalone test purpose */
+int main ()
+{
+    struct devperf_t oPerf;
+    bzero(&oPerf, sizeof(oPerf));
+    DevGetPerfData ((void*)"da0", &oPerf);
+    printf ("%lu\t%lu\n", oPerf.rbytes, oPerf.wbytes);
+    return (0);
+}
+#endif
+
 #elif defined(__FreeBSD__)
 
 #include <sys/disk.h>
@@ -269,6 +347,7 @@ int DevGetPerfData (const void *p_pvDevi
 
 	if(devstat_getdevs(kd, &stats) == -1) {
 		syslog(0, "DISKPERF: getdevs fail");
+		return (-1);
 	}
 
 	for(found = 0, i = 0; i < (stats.dinfo)->numdevs; i++) {
