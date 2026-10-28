--- compat.h.orig
+++ compat.h
@@ -3,7 +3,7 @@
 #define COMPAT_H_INCLUDED
 
 #if !defined(__FreeBSD__) && !defined(__OpenBSD__) && \
-	!defined(__NetBSD__) && !defined(__linux__)
+	!defined(__NetBSD__) && !defined(__linux__) && !defined(__DragonFly__)
 
 extern void strlcpy(char * restrict dest, const char * restrict src, size_t size);
 extern void strlcat(char * restrict dest, const char * restrict src, size_t size);
