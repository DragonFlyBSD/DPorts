--- jdk/src/solaris/native/java/lang/childproc.c.orig	2021-01-20 00:41:17 UTC
+++ jdk/src/solaris/native/java/lang/childproc.c
@@ -79,7 +79,7 @@ isAsciiDigit(char c)
 int
 closeDescriptors(void)
 {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     closefrom(FAIL_FILENO + 1);
 #else
     int err;
