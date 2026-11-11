--- src/bin/system/e_system_cpufreq.c.orig
+++ src/bin/system/e_system_cpufreq.c
@@ -2,7 +2,7 @@
 
 #if defined __OpenBSD__
 // no local funcs
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 // no local funcs
 #else
 static int
@@ -256,7 +256,7 @@
 {
 #if defined __OpenBSD__
   e_system_inout_command_send("cpufreq-pwr-set", "err");
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
   e_system_inout_command_send("cpufreq-pwr-set", "err");
 #else
   int v = atoi(params); // 0->100
@@ -292,7 +292,7 @@
 {
 #if defined __OpenBSD__
   e_system_inout_command_send("cpufreq-pwr-get", "err");
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
   e_system_inout_command_send("cpufreq-pwr-get", "err");
 #else
   int v;
