--- afio.h.orig
+++ afio.h
@@ -483,7 +483,7 @@
 #ifndef MKDIR
 int rmdir (char *);
 #endif
-#if !defined (linux) && !defined(__FreeBSD__) && !defined(sun) && !defined(__CYGWIN32__)
+#if !defined (linux) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(sun) && !defined(__CYGWIN32__)
 VOIDFN (*signal ())();
 #endif
      ssize_t fswrite (int, char*, size_t);
