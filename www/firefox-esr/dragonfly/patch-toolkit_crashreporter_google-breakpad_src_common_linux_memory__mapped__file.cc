--- toolkit/crashreporter/google-breakpad/src/common/linux/memory_mapped_file.cc.intermediate	2026-09-07 20:37:50 UTC
+++ toolkit/crashreporter/google-breakpad/src/common/linux/memory_mapped_file.cc
@@ -58,7 +58,7 @@ MemoryMappedFile::~MemoryMappedFile() {
 
 bool MemoryMappedFile::Map(const char* path, size_t offset) {
   Unmap();
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     return false;
 #else
 
@@ -104,7 +104,7 @@ bool MemoryMappedFile::Map(const char* path, size_t of
 }
 
 void MemoryMappedFile::Unmap() {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   if (content_.data()) {
     sys_munmap(const_cast<uint8_t*>(content_.data()), content_.length());
     content_.Set(NULL, 0);
