--- common/os_calls.c.orig
+++ common/os_calls.c
@@ -107,7 +107,7 @@
 
 /* sys/ucred.h needs to be included to use struct xucred
  * in FreeBSD and OS X. No need for other BSDs except GNU/kFreeBSD */
-#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/ucred.h>
 #endif
 
@@ -634,7 +634,7 @@
     unsigned int xucred_length;
     xucred_length = sizeof(xucred);
 
-    if (getsockopt(sck, SOL_LOCAL, LOCAL_PEERCRED, &xucred, &xucred_length))
+    if (getsockopt(sck, 0, LOCAL_PEERCRED, &xucred, &xucred_length))
     {
         return 1;
     }
@@ -648,7 +648,7 @@
     }
     if (gid != 0)
     {
-        *gid = xucred.cr_gid;
+        *gid = xucred.cr_groups[0];
     }
     return 0;
 #else
