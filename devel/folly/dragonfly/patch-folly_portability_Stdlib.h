--- folly/portability/Stdlib.h.intermediate	2020-06-28 21:28:04 UTC
+++ folly/portability/Stdlib.h
@@ -50,7 +50,7 @@ char*** _NSGetEnviron(void);
 #define environ (*_NSGetEnviron())
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 // Needed to resolve linkage
 extern char** environ;
 #endif
