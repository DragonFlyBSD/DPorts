--- src/utils/padsp.c.orig
+++ src/utils/padsp.c
@@ -1527,10 +1527,14 @@
 
     if (flags & O_CREAT) {
         va_start(args, flags);
+#if defined(__DragonFly__)
+        mode = (mode_t) va_arg(args, int);
+#else
         if (sizeof(mode_t) < sizeof(int))
             mode = (mode_t) va_arg(args, int);
         else
             mode = va_arg(args, mode_t);
+#endif
         va_end(args);
     }
 
@@ -2394,7 +2398,7 @@
     return ret;
 }
 
-#if !defined(__GLIBC__) && !defined(__FreeBSD__)
+#if !defined(__GLIBC__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 int ioctl(int fd, int request, ...) {
 #else
 int ioctl(int fd, unsigned long request, ...) {
@@ -2582,10 +2586,14 @@
 
     if (flags & O_CREAT) {
         va_start(args, flags);
+#if defined(__DragonFly__)
+        mode = (mode_t) va_arg(args, int);
+#else
         if (sizeof(mode_t) < sizeof(int))
             mode = va_arg(args, int);
         else
             mode = va_arg(args, mode_t);
+#endif
         va_end(args);
     }
 
