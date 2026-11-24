--- plugins/spotify/src/items.cpp.orig
+++ plugins/spotify/src/items.cpp
@@ -24,7 +24,7 @@
         !error.isEmpty())
         WARN << error;
 }
-#elif defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD) || defined(__DragonFly__)
 #include <QDBusInterface>
 void pauseSpotify()
 {
