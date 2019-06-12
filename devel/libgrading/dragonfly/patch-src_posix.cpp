Seems only Darwin and FreeBSD has #define SHM_ANON (char*)1

--- src/posix.cpp	2019-06-07 15:58:06 UTC
+++ src/posix.cpp
@@ -125,7 +125,7 @@ class PosixSharedMemory : public SharedM
 
 unique_ptr<SharedMemory> grading::MapSharedData(size_t len)
 {
-#if defined (__BSD_VISIBLE)
+#if defined (__APPLE__) || defined(__FreeBSD__)
 	int fd = shm_open(SHM_ANON, O_RDWR, 0600);
 #else
 	char tmpnameTemplate[] = "/tmp/libgrading.XXXXXX";
