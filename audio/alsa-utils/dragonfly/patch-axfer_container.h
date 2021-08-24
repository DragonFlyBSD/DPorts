--- axfer/container.h.orig	2020-02-19 12:02:10 UTC
+++ axfer/container.h
@@ -18,6 +18,10 @@
 
 #include <alsa/asoundlib.h>
 
+#if defined(__DragonFly__)
+typedef off_t   off64_t;
+#endif
+
 enum container_type {
 	CONTAINER_TYPE_PARSER = 0,
 	CONTAINER_TYPE_BUILDER,
