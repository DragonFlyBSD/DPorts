--- src/include/trousers_types.h.intermediate	2016-12-07 16:10:31 UTC
+++ src/include/trousers_types.h
@@ -128,7 +128,7 @@ typedef struct tdTSS_KEY {
 
 #if (defined (__linux) || defined (linux) || defined (SOLARIS) || defined (__GLIBC__))
 #define BSD_CONST
-#elif (defined (__OpenBSD__) || defined (__FreeBSD__)) || defined (__APPLE__)
+#elif (defined (__OpenBSD__) || defined (__FreeBSD__)) || defined (__APPLE__) || defined (__DragonFly__)
 #define BSD_CONST const
 #endif
 
