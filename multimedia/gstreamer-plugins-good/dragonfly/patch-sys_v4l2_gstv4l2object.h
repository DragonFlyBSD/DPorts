--- sys/v4l2/gstv4l2object.h.intermediate	2015-12-18 09:37:28.000000000 +0200
+++ sys/v4l2/gstv4l2object.h
@@ -40,7 +40,7 @@
 #include <sys/types.h>
 #ifdef __sun
 #include <sys/videodev2.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <linux/videodev2.h>
 #else /* linux */
 #include <linux/types.h>
