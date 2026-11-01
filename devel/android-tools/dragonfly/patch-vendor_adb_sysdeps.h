--- vendor/adb/sysdeps.h.orig
+++ vendor/adb/sysdeps.h
@@ -534,7 +534,7 @@
 }
 
 static inline int adb_pread(borrowed_fd fd, void* buf, size_t len, off64_t offset) {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return TEMP_FAILURE_RETRY(pread(fd.get(), buf, len, offset));
 #else
     return TEMP_FAILURE_RETRY(pread64(fd.get(), buf, len, offset));
@@ -556,7 +556,7 @@
 }
 
 static inline int adb_pwrite(int fd, const void* buf, size_t len, off64_t offset) {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return TEMP_FAILURE_RETRY(pwrite(fd, buf, len, offset));
 #else
     return TEMP_FAILURE_RETRY(pwrite64(fd, buf, len, offset));
@@ -571,7 +571,7 @@
 #define pwrite ___xxx_pwrite
 
 static inline int64_t adb_lseek(borrowed_fd fd, int64_t pos, int where) {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return lseek(fd.get(), pos, where);
 #else
     return lseek64(fd.get(), pos, where);
