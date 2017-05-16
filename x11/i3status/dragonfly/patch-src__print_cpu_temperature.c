--- src/print_cpu_temperature.c.orig	2014-08-04 18:08:02.084610000 +0200
+++ src/print_cpu_temperature.c	2014-08-04 17:39:50.363423000 +0200
@@ -8,7 +8,7 @@
 
 #include "i3status.h"
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 #include <err.h>
 #include <sys/types.h>
 #include <sys/sysctl.h>
@@ -17,6 +17,13 @@
 #define TZ_AVG(x) ((x) - TZ_ZEROC) / 10
 #endif
 
+#if defined(__DragonFly__)
+#include <sys/sysctl.h>
+#include <sys/types.h>
+#include <sys/sensors.h>
+#define MUKTOC(v) ((v - 273150000) / 1000000.0)
+#endif
+
 #if defined(__OpenBSD__)
 #include <sys/param.h>
 #include <sys/types.h>
@@ -86,7 +93,27 @@
                                         colorful_output = false;
                                 }
                         }
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
+#elif defined(__DragonFly__)
+			struct sensor th_sensor;
+			size_t th_sensorlen;
+
+			th_sensorlen = sizeof(th_sensor);
+
+			if (sysctlbyname(thermal_zone, &th_sensor, &th_sensorlen, NULL, 0) == -1) {
+				perror("sysctlbyname");
+				goto error;
+			}
+			if (MUKTOC(th_sensor.value) >= max_threshold) {
+				START_COLOR("color_bad");
+				colorful_output = true;
+			}
+			outwalk += sprintf(outwalk, "%.2f", MUKTOC(th_sensor.value));
+			if (colorful_output) {
+				END_COLOR;
+				colorful_output = false;
+			}
+
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
                         int sysctl_rslt;
                         size_t sysctl_size = sizeof(sysctl_rslt);
                         if (sysctlbyname(path, &sysctl_rslt, &sysctl_size, NULL, 0))
