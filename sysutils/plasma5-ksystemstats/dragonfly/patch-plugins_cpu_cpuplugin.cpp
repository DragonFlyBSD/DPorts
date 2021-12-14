--- plugins/cpu/cpuplugin.cpp.orig	2021-08-31 11:39:30 UTC
+++ plugins/cpu/cpuplugin.cpp
@@ -24,7 +24,7 @@ CpuPlugin::CpuPlugin(QObject *parent, co
     : SensorPlugin(parent, args)
 #if defined Q_OS_LINUX
     , d(new LinuxCpuPluginPrivate(this))
-#elif defined Q_OS_FREEBSD
+#elif defined(Q_OS_FREEBSD) && !defined(__DragonFly__)
     , d(new FreeBsdCpuPluginPrivate(this))
 #else
     , d(new CpuPluginPrivate(this))
