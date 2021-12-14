--- plugins/memory/freebsdbackend.cpp.orig	2021-08-31 11:39:30 UTC
+++ plugins/memory/freebsdbackend.cpp
@@ -51,7 +51,11 @@
     m_free = freeSensor;
     m_sysctlSensors.push_back(freeSensor);
 
+#ifdef __DragonFly__
+    auto cacheSensor = new KSysGuard::SysctlSensor<uint32_t>(QStringLiteral("cache"),"vm.stats.vm.v_cache_count", m_physicalObject);
+#else
     auto cacheSensor = new KSysGuard::SysctlSensor<uint32_t>(QStringLiteral("cache"),"vm.v_cache_count", m_physicalObject);
+#endif
     cacheSensor->setConversionFunction(capturedPagesToBytes);
     m_cache = cacheSensor;
     m_sysctlSensors.push_back(cacheSensor);
