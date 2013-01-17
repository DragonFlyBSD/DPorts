--- interface/low_interface.h.intermediate	2013-01-17 17:42:01.674376000 +0100
+++ interface/low_interface.h	2013-01-17 17:42:18.144399000 +0100
@@ -50,7 +50,7 @@
 #include <linux/cdrom.h>
 #include <linux/major.h>
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/cdio.h>
 #include <sys/cdrio.h>
