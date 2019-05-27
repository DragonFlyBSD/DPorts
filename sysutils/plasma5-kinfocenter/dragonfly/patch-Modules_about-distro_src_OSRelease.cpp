--- Modules/about-distro/src/OSRelease.cpp.intermediate	2019-05-26 15:52:00.000000000 +0000
+++ Modules/about-distro/src/OSRelease.cpp
@@ -62,12 +62,12 @@ static void setVar(QStringList *var, con
 
 OSRelease::OSRelease(const QString &filePath)
 {
-    name = QLatin1String("FreeBSD");
-    id = QLatin1String("FreeBSD");
-    prettyName = QLatin1String("FreeBSD");
-    homeUrl = QLatin1String("https://freebsd.org");
-    supportUrl = QLatin1String("https://www.freebsd.org/support.html");
-    bugReportUrl = QLatin1String("https://bugs.freebsd.org/bugzilla");
+    name = QLatin1String("DragonFly");
+    id = QLatin1String("dragonfly");
+    prettyName = QLatin1String("DragonFly BSD");
+    homeUrl = QLatin1String("https://dragonflybsd.org");
+    supportUrl = QLatin1String("https://www.dragonflybsd.org");
+    bugReportUrl = QLatin1String("https://bugs.dragonflybsd.org");
 }
 
 QString OSRelease::defaultFilePath()
