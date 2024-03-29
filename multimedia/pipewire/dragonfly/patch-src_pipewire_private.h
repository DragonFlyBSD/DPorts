--- src/pipewire/private.h.orig	2023-10-06 09:37:06 UTC
+++ src/pipewire/private.h
@@ -22,6 +22,10 @@ extern "C" {
 #include <spa/utils/result.h>
 #include <spa/utils/type-info.h>
 
+#ifdef __DragonFly__
+#include <sys/ucred.h>
+#endif
+
 #if defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__GNU__)
 struct ucred {
 };
