--- src/jdk.hotspot.agent/bsd/native/libsaproc/BsdDebuggerLocal.cpp.orig	2021-09-14 03:59:48 UTC
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/BsdDebuggerLocal.cpp
@@ -24,7 +24,7 @@
  */
 
 #include <stdlib.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/sysarch.h>
 #endif
 #include <cxxabi.h>
@@ -321,7 +321,11 @@ JNIEXPORT jbyteArray JNICALL Java_sun_jv
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
@@ -412,17 +416,19 @@ JNIEXPORT jlongArray JNICALL Java_sun_jv
   regs[REG_INDEX(CS)] = gregs.r_cs;
   regs[REG_INDEX(RSP)] = gregs.r_rsp;
   regs[REG_INDEX(SS)] = gregs.r_ss;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   void **fs_base = NULL, **gs_base = NULL;
   amd64_get_fsbase(fs_base);
   amd64_get_gsbase(gs_base);
 
   regs[REG_INDEX(FSBASE)] = (long) *fs_base;
   regs[REG_INDEX(GSBASE)] = (long) *gs_base;
+#ifndef __DragonFly__
   regs[REG_INDEX(DS)] = gregs.r_ds;
   regs[REG_INDEX(ES)] = gregs.r_es;
   regs[REG_INDEX(FS)] = gregs.r_fs;
   regs[REG_INDEX(GS)] = gregs.r_gs;
+#endif
 #endif /* __FreeBSD__ */
 
 #endif /* amd64 */
