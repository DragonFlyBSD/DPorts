--- srv/text_object.h.orig	2012-05-04 00:08:27.000000000 +0300
+++ src/text_object.h
@@ -166,7 +166,7 @@ enum text_object_type {
 	OBJ_wireless_link_qual_perc,
 	OBJ_wireless_link_bar,
 #endif /* __linux__ */
-#if defined(__FreeBSD__) || defined(__linux__)
+#if defined(__FreeBSD__) || defined(__linux__) || defined(__DragonFly__)
 	OBJ_if_up,
 #endif
 	OBJ_if_empty,
