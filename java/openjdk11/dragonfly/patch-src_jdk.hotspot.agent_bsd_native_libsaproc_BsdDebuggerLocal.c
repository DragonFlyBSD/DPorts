--- src/jdk.hotspot.agent/bsd/native/libsaproc/BsdDebuggerLocal.c.orig	2019-10-16 18:31:09 UTC
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/BsdDebuggerLocal.c
@@ -298,7 +298,11 @@ JNIEXPORT jbyteArray JNICALL Java_sun_jv
   bufPtr = (*env)->GetByteArrayElements(env, array, &isCopy);
   CHECK_EXCEPTION_(0);
 
+#ifdef __DragonFly__
+  err = PS_ERR; /* XXX unsupported */
+#else
   err = ps_pread(get_proc_handle(env, this_obj), (psaddr_t) (uintptr_t)addr, bufPtr, numBytes);
+#endif
   (*env)->ReleaseByteArrayElements(env, array, bufPtr, 0);
   return (err == PS_OK)? array : 0;
 }
@@ -382,7 +386,7 @@ JNIEXPORT jlongArray JNICALL Java_sun_jv
   regs[REG_INDEX(CS)] = gregs.r_cs;
   regs[REG_INDEX(RSP)] = gregs.r_rsp;
   regs[REG_INDEX(SS)] = gregs.r_ss;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/sysarch.h>
   void **fs_base = NULL, **gs_base = NULL;
   amd64_get_fsbase(fs_base);
@@ -390,10 +394,12 @@ JNIEXPORT jlongArray JNICALL Java_sun_jv
 
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
