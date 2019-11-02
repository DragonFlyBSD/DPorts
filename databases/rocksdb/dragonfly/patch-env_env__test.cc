--- env/env_test.cc.orig	2019-10-02 00:04:43 UTC
+++ env/env_test.cc
@@ -1354,7 +1354,9 @@ TEST_P(EnvPosixTestWithParam, Preallocat
   std::unique_ptr<WritableFile> srcfile;
   EnvOptions soptions;
   soptions.use_direct_reads = soptions.use_direct_writes = direct_io_;
-#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
+#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && \
+    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD) && \
+    !defined(OS_DRAGONFLYBSD)
     if (soptions.use_direct_writes) {
       rocksdb::SyncPoint::GetInstance()->SetCallBack(
           "NewWritableFile:O_DIRECT", [&](void* arg) {
@@ -1415,7 +1417,9 @@ TEST_P(EnvPosixTestWithParam, Consistent
       const std::string path =
           test::TmpDir(env_) + "/" + "testfile_" + std::to_string(i);
       std::unique_ptr<WritableFile> file;
-#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD)
+#if !defined(OS_MACOSX) && !defined(OS_WIN) && !defined(OS_SOLARIS) && \
+    !defined(OS_AIX) && !defined(OS_OPENBSD) && !defined(OS_FREEBSD) && \
+    !defined(OS_DRAGONFLYBSD)
       if (soptions.use_direct_writes) {
         rocksdb::SyncPoint::GetInstance()->SetCallBack(
             "NewWritableFile:O_DIRECT", [&](void* arg) {
