--- src/jdk.hotspot.agent/bsd/native/libsaproc/libproc.h.orig	2019-10-16 18:31:09 UTC
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/libproc.h
@@ -58,7 +58,14 @@ typedef int bool;
 #include <elf.h>
 #include <link.h>
 #include <machine/reg.h>
+#ifdef __DragonFly__
+typedef enum ps_err_e {
+  PS_OK, PS_ERR, PS_BADPID, PS_BADLID,
+  PS_BADADDR, PS_NOSYM, PS_NOFREGS
+} ps_err_e;
+#else
 #include <proc_service.h>
+#endif
 #if defined(sparc) || defined(sparcv9)
 /*
   If _LP64 is defined ptrace.h should be taken from /usr/include/asm-sparc64
