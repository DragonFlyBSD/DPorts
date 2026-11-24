--- src/KM_fileio.cpp.orig
+++ src/KM_fileio.cpp
@@ -671,7 +671,7 @@
     {
       return Kumu::PathMakeAbsolute(p);
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   // requires procfs
   size_t size = X_BUFSIZE;
   ssize_t rc = readlink("/proc/curproc/file", path, size);
