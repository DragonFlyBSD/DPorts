--- vendor/libbase/include/android-base/endian.h.orig
+++ vendor/libbase/include/android-base/endian.h
@@ -25,7 +25,7 @@
 
 #include <sys/endian.h>
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 #include <netinet/in.h>
