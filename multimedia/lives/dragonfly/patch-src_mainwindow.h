--- src/mainwindow.h.orig	2020-11-01 19:02:48 UTC
+++ src/mainwindow.h
@@ -399,7 +399,7 @@ enum {
 #define EXEC_YOUTUBE_DL "youtube-dl"
 #define EXEC_YOUTUBE_DLC "youtube-dlc"
 #define EXEC_PIP "pip"
-#ifdef IS_FREEBSD
+#if defined(IS_FREEBSD) || defined(__DragonFly__)
 #define EXEC_MD5SUM "md5"
 #else
 #define EXEC_MD5SUM "md5sum"
