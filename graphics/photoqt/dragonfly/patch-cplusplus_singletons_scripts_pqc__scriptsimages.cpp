--- cplusplus/singletons/scripts/pqc_scriptsimages.cpp.orig
+++ cplusplus/singletons/scripts/pqc_scriptsimages.cpp
@@ -48,7 +48,7 @@
 #include <pqc_notify_cpp.h>
 #include <pqc_helper.h>
 
-#if defined(Q_OS_FREEBSD)
+#if defined(Q_OS_FREEBSD) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/extattr.h>
 #include <cerrno>
