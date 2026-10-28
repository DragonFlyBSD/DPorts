--- src/c/wrapper.c.orig
+++ src/c/wrapper.c
@@ -15440,6 +15440,8 @@
 
 #ifdef MACOSX
     return info.kp_eproc.e_ppid;
+#elif defined(__DragonFly__)
+    return info.kp_ppid;
 #else // freeBSD
     return info.ki_ppid;
 #endif
