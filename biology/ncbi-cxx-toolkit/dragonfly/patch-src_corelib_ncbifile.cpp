--- src/corelib/ncbifile.cpp.orig	2018-02-12 15:24:17 UTC
+++ src/corelib/ncbifile.cpp
@@ -3758,7 +3758,7 @@ static void s_AddEntry(CDir::TEntries*
 
     if (flags & CDir::fCreateObjects) {
         CDirEntry::EType type = CDir::eUnknown;
-#  if defined(_DIRENT_HAVE_D_TYPE)
+#  if defined(_DIRENT_HAVE_D_TYPE) && !defined(__DragonFly__)
         struct stat st;
         if (entry->d_type) {
             st.st_mode = DTTOIF(entry->d_type);
