--- tools/profiler/lul/platform-linux-lul.cpp.orig	2026-09-04 00:01:31 UTC
+++ tools/profiler/lul/platform-linux-lul.cpp
@@ -58,7 +58,8 @@ static bool GetApkEmbeddedLibraryOffset(uintptr_t aLib
 void read_procmaps(lul::LUL* aLUL) {
   MOZ_ASSERT(aLUL->CountMappings() == 0);
 
-#if defined(GP_OS_linux) || defined(GP_OS_android) || defined(GP_OS_freebsd)
+#if defined(GP_OS_linux) || defined(GP_OS_android) || defined(GP_OS_freebsd) || \
+    defined(GP_OS_dragonfly)
   SharedLibraryInfo info = SharedLibraryInfo::GetInfoForSelf();
 
   for (size_t i = 0; i < info.GetSize(); i++) {
