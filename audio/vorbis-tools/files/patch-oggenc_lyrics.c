$FreeBSD: audio/vorbis-tools/files/patch-oggenc_lyrics.c 300895 2012-07-14 12:56:14Z beat $
--- oggenc/lyrics.c.orig	2010-06-05 17:00:07.000000000 +0200
+++ oggenc/lyrics.c	2010-06-05 17:00:17.000000000 +0200
@@ -16,7 +16,7 @@
 #endif
 
 #include <stdio.h>
-#include <malloc.h>
+#include <stdlib.h>
 #include <string.h>
 #include <errno.h>
 
