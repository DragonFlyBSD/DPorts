--- src/3rdparty/chromium/base/base_export.h.orig	2024-02-10 00:23:21 UTC
+++ src/3rdparty/chromium/base/base_export.h
@@ -5,6 +5,11 @@
 #ifndef BASE_BASE_EXPORT_H_
 #define BASE_BASE_EXPORT_H_
 
+#ifdef __DragonFly__
+// XXX for struct klist visibility in process_handle_dragonfly.cc through <sys/eventvar.h>
+#define _KERNEL_STRUCTURES // for later inclusion for <sys/user.h> in gen/foo*jumbo*.cc
+#endif
+
 #if defined(COMPONENT_BUILD)
 #if defined(WIN32)
 
