--- tools/klee-replay/file-creator.c.orig	2020-03-03 16:03:44 UTC
+++ tools/klee-replay/file-creator.c
@@ -169,7 +169,7 @@ static int create_char_dev(const char *f
         int res = tcgetattr(aslave, &mode);
         assert(!res);
         mode.c_iflag = IGNBRK;
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
         mode.c_oflag &= ~(ONLCR | OCRNL | ONLRET);
 #else
         mode.c_oflag &= ~(OLCUC | ONLCR | OCRNL | ONLRET);
