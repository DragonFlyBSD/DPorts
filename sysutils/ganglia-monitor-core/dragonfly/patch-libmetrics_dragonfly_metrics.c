--- libmetrics/dragonfly/metrics.c.orig	2015-03-23 18:35:43.000000000 +0200
+++ libmetrics/dragonfly/metrics.c
@@ -153,7 +153,7 @@ cpu_speed_func ( void )
     * machdep.tsc_freq is an i386/amd64 only feature, but it's the best
     * we've got at the moment.
     */
-   if (sysctlbyname("machdep.tsc_freq", &cpu_speed, &len, NULL, 0) == -1)
+   if (sysctlbyname("hw.tsc_frequency", &cpu_speed, &len, NULL, 0) == -1)
      cpu_speed = 0;
    val.uint16 = cpu_speed /= 1000000;
 
@@ -417,6 +417,17 @@ cpu_sintr_func ( void )
 {
    g_val_t val;
    val.f = 0.0;
+   return val;
+}
+
+/*
+** FIXME - Not yet implemented on DragonFly.
+*/
+g_val_t
+cpu_steal_func ( void )
+{
+   g_val_t val;
+   val.f = 0.0;
    return val;
 }
 
