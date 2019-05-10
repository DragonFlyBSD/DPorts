Same as in src/system/osapi/posix/sysvm.cc

--- src/cpu/cpu_jitc_x86_64/ppc_mmu.cc.orig	2011-07-12 20:57:24 UTC
+++ src/cpu/cpu_jitc_x86_64/ppc_mmu.cc
@@ -819,6 +819,10 @@ int FASTCALL ppc_write_effective_byte(PP
 #include <unistd.h>
 #include <sys/mman.h>
 
+#ifndef MAP_32BIT
+#define MAP_32BIT 0
+#endif
+
 bool FASTCALL ppc_init_physical_memory(uint size)
 {
 	if (size < 64*1024*1024) {
