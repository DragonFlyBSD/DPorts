--- src/locker/plugin/password.cpp.orig
+++ src/locker/plugin/password.cpp
@@ -5,7 +5,7 @@
 #include "gtkmm/enums.h"
 #include "gtkmm/label.h"
 #include <unistd.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <security/pam_types.h>
 #else
 #include <security/_pam_types.h>
