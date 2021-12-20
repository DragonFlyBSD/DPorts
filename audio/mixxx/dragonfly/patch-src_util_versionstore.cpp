--- src/util/versionstore.cpp.intermediate	2021-12-19 18:53:22.000000000 +0000
+++ src/util/versionstore.cpp
@@ -77,6 +77,8 @@ QString VersionStore::platform() {
     QString base = QStringLiteral("Linux");
 #elif defined(__WINDOWS__)
     QString base = QStringLiteral("Windows");
+#elif defined(__DragonFly__)
+    QString base = QStringLiteral("DragonFly");
 #elif defined(__FreeBSD__)
     QString base = QStringLiteral("FreeBSD");
 #else
