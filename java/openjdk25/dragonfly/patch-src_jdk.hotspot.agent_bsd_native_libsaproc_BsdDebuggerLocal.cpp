--- src/jdk.hotspot.agent/bsd/native/libsaproc/BsdDebuggerLocal.cpp.orig
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/BsdDebuggerLocal.cpp
@@ -24,7 +24,7 @@
  */
 
 #include <stdlib.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/sysarch.h>
 #endif
 #include <cxxabi.h>
@@ -324,7 +324,11 @@
   bufPtr = env->GetByteArrayElements(array, &isCopy);
   CHECK_EXCEPTION_(0);
 
+#ifdef __DragonFly__
+  err = PS_ERR; /* XXX unsupported */
+#else
   err = ps_pread(get_proc_handle(env, this_obj), (psaddr_t) (uintptr_t)addr, bufPtr, numBytes);
+#endif
   env->ReleaseByteArrayElements(array, bufPtr, 0);
   return (err == PS_OK)? array : 0;
 }
@@ -415,17 +419,19 @@
   regs[REG_INDEX(CS)] = gregs.r_cs;
   regs[REG_INDEX(RSP)] = gregs.r_rsp;
   regs[REG_INDEX(SS)] = gregs.r_ss;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   void *fs_base = NULL, *gs_base = NULL;
   amd64_get_fsbase(&fs_base);
   amd64_get_gsbase(&gs_base);
 
   regs[REG_INDEX(FSBASE)] = (long) fs_base;
   regs[REG_INDEX(GSBASE)] = (long) gs_base;
+#ifndef __DragonFly__
   regs[REG_INDEX(DS)] = gregs.r_ds;
   regs[REG_INDEX(ES)] = gregs.r_es;
   regs[REG_INDEX(FS)] = gregs.r_fs;
   regs[REG_INDEX(GS)] = gregs.r_gs;
+#endif
 #endif /* __FreeBSD__ */
 
 #endif /* amd64 */
