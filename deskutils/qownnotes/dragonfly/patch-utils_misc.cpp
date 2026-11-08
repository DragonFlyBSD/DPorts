--- utils/misc.cpp.orig
+++ utils/misc.cpp
@@ -1381,6 +1381,8 @@
     return QLatin1String("NetBSD");
 #elif defined(Q_OS_OPENBSD)
     return QLatin1String("OpenBSD");
+#elif defined(Q_OS_DRAGONFLY)
+    return QLatin1String("DragonFly");
 #elif defined(Q_OS_SOLARIS)
     return QLatin1String("Solaris");
 #else
