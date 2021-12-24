--- src/corelib/ncbifile.cpp.orig	2020-06-11 17:34:05 UTC
+++ src/corelib/ncbifile.cpp
@@ -3801,7 +3801,7 @@ static void s_AddEntry(CDir::TEntries*
 
     if (flags & CDir::fCreateObjects) {
         CDirEntry::EType type = CDir::eUnknown;
-#  if defined(_DIRENT_HAVE_D_TYPE)
+#  if defined(_DIRENT_HAVE_D_TYPE) && !defined(__DragonFly__)
         struct stat st;
         if (entry->d_type) {
             st.st_mode = DTTOIF(entry->d_type);
@@ -5215,7 +5215,11 @@ void s_GetFileSystemInfo(const string&
     GET_STATFS_INFO;
     fs_name_ptr = st.f_fstypename;
     if (need_name_max) {
+#ifdef __DragonFly__
+        info->filename_max = MFSNAMELEN - 1;
+#else
         info->filename_max = (unsigned long)st.f_namemax;
+#endif
     }
 
 #  elif defined(NCBI_OS_OSF1)  &&  defined(HAVE_STATVFS)
