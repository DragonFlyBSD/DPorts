--- env/env_test.cc.orig	2023-09-01 20:58:39 UTC
+++ env/env_test.cc
@@ -1568,7 +1568,8 @@ TEST_F(EnvPosixTest, NonAlignedDirectIOM
   }
 
 #if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && \
-    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
+    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD) \
+    !defined(OS_DRAGONFLYBSD)
   if (soptions.use_direct_reads) {
     ROCKSDB_NAMESPACE::SyncPoint::GetInstance()->SetCallBack(
         "NewRandomAccessFile:O_DIRECT", [&](void* arg) {
@@ -1934,7 +1935,8 @@ TEST_P(EnvPosixTestWithParam, Preallocat
   EnvOptions soptions;
   soptions.use_direct_reads = soptions.use_direct_writes = direct_io_;
 #if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && \
-    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
+    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD) && \
+    !defined(OS_DRAGONFLYBSD)
   if (soptions.use_direct_writes) {
     ROCKSDB_NAMESPACE::SyncPoint::GetInstance()->SetCallBack(
         "NewWritableFile:O_DIRECT", [&](void* arg) {
@@ -1997,7 +1999,8 @@ TEST_P(EnvPosixTestWithParam, Consistent
     const std::string path = test_base_dir + "/testfile_" + std::to_string(i);
     std::unique_ptr<WritableFile> file;
 #if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && \
-    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
+    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD) && \
+    !defined(OS_DRAGONFLYBSD)
     if (soptions.use_direct_writes) {
       ROCKSDB_NAMESPACE::SyncPoint::GetInstance()->SetCallBack(
           "NewWritableFile:O_DIRECT", [&](void* arg) {
