--- include/hsakmttypes.h.orig	2018-11-15 20:11:47 UTC
+++ include/hsakmttypes.h
@@ -52,7 +52,7 @@ extern "C" {
     typedef signed __int64     HSAint64;
     typedef unsigned __int64   HSAuint64;
 
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <stdbool.h>
 #include <stdint.h>
