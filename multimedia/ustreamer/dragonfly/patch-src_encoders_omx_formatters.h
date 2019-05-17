--- src/encoders/omx/formatters.h.intermediate	2019-05-07 20:34:13.000000000 +0000
+++ src/encoders/omx/formatters.h
@@ -34,7 +34,7 @@
 #include "../../tools.h"
 
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define LOG_OMX_ERROR(_error, _msg, ...) { \
 		LOGGING_LOCK; \
 		printf("-- ERROR [%.03Lf tid=%ld] -- " _msg ": %s\n", get_now_monotonic(), \
