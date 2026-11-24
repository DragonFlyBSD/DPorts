--- src/openrct2/platform/Platform.Linux.cpp.orig
+++ src/openrct2/platform/Platform.Linux.cpp
@@ -17,7 +17,7 @@
     #include <pwd.h>
     #include <unistd.h>
     #include <vector>
-    #if defined(__FreeBSD__) || defined(__NetBSD__)
+    #if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
         #include <stddef.h>
         #include <sys/param.h>
         #include <sys/sysctl.h>
@@ -200,8 +200,8 @@
                 break;
             }
         }
-    #elif defined(__FreeBSD__) || defined(__NetBSD__)
-        #if defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
+        #if defined(__FreeBSD__) || defined(__DragonFly__)
         const int32_t mib[] = {
             CTL_KERN,
             KERN_PROC,
