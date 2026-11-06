--- src/helper/HelperApp.cpp.orig
+++ src/helper/HelperApp.cpp
@@ -375,7 +375,7 @@
 #if defined(Q_OS_LINUX)
         // append to wtmp
         updwtmpx("/var/log/wtmp", &entry);
-#elif defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
         pututxline(&entry);
 #endif
     }
