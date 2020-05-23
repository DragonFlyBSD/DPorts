--- env/env_test.cc.orig	2020-04-16 23:01:15 UTC
+++ env/env_test.cc
@@ -1376,7 +1376,9 @@ TEST_P(EnvPosixTestWithParam, Preallocat
   std::unique_ptr<WritableFile> srcfile;
   EnvOptions soptions;
   soptions.use_direct_reads = soptions.use_direct_writes = direct_io_;
-#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
+#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && \
+    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD) && \
+    !defined(OS_DRAGONFLYBSD)
     if (soptions.use_direct_writes) {
       ROCKSDB_NAMESPACE::SyncPoint::GetInstance()->SetCallBack(
           "NewWritableFile:O_DIRECT", [&](void* arg) {
@@ -1437,7 +1439,7 @@ TEST_P(EnvPosixTestWithParam, Consistent
     const std::string path =
         test::TmpDir(env_) + "/" + "testfile_" + std::to_string(i);
     std::unique_ptr<WritableFile> file;
-#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
+#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD) && !defined(OS_DRAGONFLYBSD)
       if (soptions.use_direct_writes) {
         ROCKSDB_NAMESPACE::SyncPoint::GetInstance()->SetCallBack(
             "NewWritableFile:O_DIRECT", [&](void* arg) {
