--- libyara/proc.c.orig	2011-07-28 12:48:43
+++ libyara/proc.c
@@ -122,7 +122,7 @@ int get_process_memory(int pid, MEMORY_B
 #include "mem.h"
 #include "proc.h"
 
-#if defined(__FreeBSD__) || defined(__MACH__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__MACH__)
 #define PTRACE_ATTACH PT_ATTACH
 #define PTRACE_DETACH PT_DETACH
 #endif
