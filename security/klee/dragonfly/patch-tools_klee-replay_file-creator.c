--- tools/klee-replay/file-creator.c.orig	2019-03-19 16:49:16 UTC
+++ tools/klee-replay/file-creator.c
@@ -114,7 +114,7 @@ static int create_char_dev(const char *f
   ts->c_oflag = 5;
   ts->c_cflag = 1215;
   ts->c_lflag = 35287;
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
   ts->c_line = 0;
 #endif
   ts->c_cc[0] = '\x03';
@@ -168,7 +168,7 @@ static int create_char_dev(const char *f
         int res = tcgetattr(aslave, &mode);
         assert(!res);
         mode.c_iflag = IGNBRK;
-#if defined(__APPLE__)
+#if defined(__APPLE__) || defined(__DragonFly__)
         mode.c_oflag &= ~(ONLCR | OCRNL | ONLRET);
 #else
         mode.c_oflag &= ~(OLCUC | ONLCR | OCRNL | ONLRET);
