--- pxr/base/arch/fileSystem.cpp.intermediate	2022-01-26 05:43:19.000000000 +0000
+++ pxr/base/arch/fileSystem.cpp
@@ -491,7 +491,7 @@ ArchGetFileName(FILE *file)
         result.assign(buf, buf + r);
     }
     return result;
-#elif defined (ARCH_OS_FREEBSD)
+#elif defined (ARCH_OS_FREEBSD) && !defined(__DragonFly__)
     int mib[4];
     size_t i, len;
     char *buffer = NULL;
@@ -533,7 +533,7 @@ ArchGetFileName(FILE *file)
 end:
     free( buffer );
     return path;
-#elif defined (ARCH_OS_DARWIN)
+#elif defined (ARCH_OS_DARWIN) || defined(__DragonFly__)
     string result;
     char buf[MAXPATHLEN];
     if (fcntl(fileno(file), F_GETPATH, buf) != -1) {
