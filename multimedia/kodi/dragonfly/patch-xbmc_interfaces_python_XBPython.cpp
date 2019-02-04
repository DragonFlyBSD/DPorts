--- xbmc/interfaces/python/XBPython.cpp.orig	2018-08-04 14:48:38.889414000 +0200
+++ xbmc/interfaces/python/XBPython.cpp	2018-08-04 14:48:50.289661000 +0200
@@ -476,7 +476,7 @@ void XBPython::Finalize()
 #if !(defined(TARGET_DARWIN) || defined(TARGET_WINDOWS))
     DllLoaderContainer::UnloadPythonDlls();
 #endif
-#if defined(TARGET_POSIX) && !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD)
+#if defined(TARGET_POSIX) && !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
     // we can't release it on windows, as this is done in UnloadPythonDlls() for win32 (see above).
     // The implementation for linux needs looking at - UnloadPythonDlls() currently only searches for "python26.dll"
     // The implementation for osx can never unload the python dylib.
