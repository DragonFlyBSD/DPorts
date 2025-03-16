--- lxqt-admin-time/timeadmindialog.h.orig	Wed Apr 17 11:51:32 2024
+++ lxqt-admin-time/timeadmindialog.h	Sun Mar
@@ -33,7 +33,7 @@
 #include "dbustimedatectl.h"
 #endif
 #endif
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 #include "fbsdtimedatectl.h"
 #endif
 class DateTimePage;
@@ -64,7 +64,7 @@ private Q_SLOTS: (private)
     DbusTimeDateCtl mTimeDateCtl;
 #endif
 #endif
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
     FBSDTimeDateCtl mTimeDateCtl;
 #endif
     DateTimePage * mDateTimeWidget;
