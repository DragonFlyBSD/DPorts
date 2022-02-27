--- src/lib/fcitx-utils/semver.h.orig	2021-12-04 15:43:05 UTC
+++ src/lib/fcitx-utils/semver.h
@@ -16,6 +16,11 @@
 #include "log.h"
 #include "macros.h"
 
+#ifdef __DragonFly__
+#undef major
+#undef minor
+#endif
+
 namespace fcitx {
 
 class FCITXUTILS_EXPORT PreReleaseId {
