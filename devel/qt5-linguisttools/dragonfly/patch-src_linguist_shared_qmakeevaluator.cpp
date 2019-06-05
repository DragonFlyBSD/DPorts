--- src/linguist/shared/qmakeevaluator.cpp.intermediate	2019-06-03 17:56:08 UTC
+++ src/linguist/shared/qmakeevaluator.cpp
@@ -1249,6 +1249,11 @@ bool QMakeEvaluator::loadSpec()
     updateMkspecPaths();
     if (qmakespec.isEmpty())
         qmakespec = propertyValue(ProKey(m_hostBuild ? "QMAKE_SPEC" : "QMAKE_XSPEC")).toQString();
+#if defined(__DragonFly__)
+    // XXX Hardcode here if QMAKESPEC is not provided by few ports...
+    if (qmakespec.isEmpty())
+        qmakespec = QLatin1String("dragonfly-g++");
+#endif
 #ifndef QT_BUILD_QMAKE
     // Legacy support for Qt4 qmake in Qt Creator, etc.
     if (qmakespec.isEmpty())
@@ -1508,6 +1513,10 @@ void QMakeEvaluator::updateMkspecPaths()
     ret << m_option->propertyValue(ProKey("QT_HOST_DATA/get")) + concat;
     ret << m_option->propertyValue(ProKey("QT_HOST_DATA/src")) + concat;
 
+#ifdef __DragonFly__
+    ret << QLatin1String("QT_LIBDIR") + concat;
+#endif
+
     ret.removeDuplicates();
     m_mkspecPaths = ret;
 }
