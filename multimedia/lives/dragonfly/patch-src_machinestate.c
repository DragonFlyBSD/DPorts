--- src/machinestate.c.orig	2020-11-06 03:00:12 UTC
+++ src/machinestate.c
@@ -1060,7 +1060,7 @@ char *get_mountpoint_for(const char *dir
 }
 
 
-#ifdef IS_FREEBSD
+#if defined(IS_FREEBSD) || defined(__DragonFly__)
 #define DU_BLOCKSIZE 1024
 #else
 #define DU_BLOCKSIZE 1
@@ -3304,7 +3304,9 @@ int get_num_cpus(void) {
 #else
   char buffer[1024];
   char command[PATH_MAX];
-#ifdef IS_FREEBSD
+#if defined(__DragonFly___)
+  lives_snprintf(command, PATH_MAX, "sysctl -n hw.ncpu");
+#elif defined(IS_FREEBSD)
   lives_snprintf(command, PATH_MAX, "sysctl -n kern.smp.cpus");
 #else
   lives_snprintf(command, PATH_MAX, "%s processor /proc/cpuinfo 2>/dev/null | %s -l 2>/dev/null",
@@ -3317,7 +3319,7 @@ int get_num_cpus(void) {
 
 
 boolean get_machine_dets(void) {
-#ifdef IS_FREEBSD
+#if defined(IS_FREEBSD) || defined(__DragonFly__)
   char *com = lives_strdup("sysctl -n hw.model");
 #else
   char *com = lives_strdup_printf("%s -m1 \"^model name\" /proc/cpuinfo | %s -e \"s/.*: //\" -e \"s:\\s\\+:/:g\"",
