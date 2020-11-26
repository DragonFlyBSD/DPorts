--- src/bin/system/e_system_cpufreq.c.orig	2020-07-26 16:39:12 UTC
+++ src/bin/system/e_system_cpufreq.c
@@ -2,7 +2,7 @@
 
 #if defined __OpenBSD__
 // no local funcs
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 // no local funcs
 #else
 static int
@@ -83,8 +83,13 @@ _cb_cpufreq_freq(void *data EINA_UNUSED,
              e_system_inout_command_send("cpufreq-freq", "ok");
              return;
           }
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
+#ifdef __DragonFly__
+	/* XXX specific to intel acpi */
+        if (sysctlbyname("hw.acpi.cpu.px_dom0.select", NULL, NULL, &f, sizeof(f)) == 0)
+#else
         if (sysctlbyname("dev.cpu.0.freq", NULL, NULL, &f, sizeof(f)) == 0)
+#endif
           {
              e_system_inout_command_send("cpufreq-freq", "ok");
              return;
@@ -106,7 +111,7 @@ _cb_cpufreq_governor(void *data EINA_UNU
    // NAME
 #if defined __OpenBSD__
    e_system_inout_command_send("cpufreq-governor", "err");
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
    e_system_inout_command_send("cpufreq-governor", "err");
 #else
    if (sys_cpu_setall("scaling_governor", params) <= 0)
@@ -128,7 +133,7 @@ _cb_cpufreq_pstate(void *data EINA_UNUSE
    // MIN_PERC MAX_PERC TURBO
 #if defined __OpenBSD__
    e_system_inout_command_send("cpufreq-pstate", "err");
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
    e_system_inout_command_send("cpufreq-pstate", "err");
 #else
    int min = 0, max = 100, turbo = 1;
