--- gdk/gdk_utils.c.orig	2013-11-20 13:26:19.000000000 +0200
+++ gdk/gdk_utils.c
@@ -409,6 +409,8 @@ MT_init(void)
 	{
 # ifdef __FreeBSD__
 		unsigned long size = 0;
+# elif defined(__DragonFly__)
+		size_t size = 0;
 # else
 		int size = 0;
 # endif
