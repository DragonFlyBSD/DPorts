--- libs/libmythbase/mythcorecontext.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythbase/mythcorecontext.cpp
@@ -616,7 +616,7 @@ bool MythCoreContext::IsMasterBackend(vo
 
 bool MythCoreContext::BackendIsRunning(void)
 {
-#if CONFIG_DARWIN || (__FreeBSD__) || defined(__OpenBSD__)
+#if CONFIG_DARWIN || (__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     const char *command = "ps -axc | grep -i mythbackend | grep -v grep > /dev/null";
 #elif defined USING_MINGW
     const char *command = "%systemroot%\\system32\\tasklist.exe "
