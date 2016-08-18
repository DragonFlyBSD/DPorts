--- src/corelib/ncbifile.cpp.orig	2014-08-28 21:02:59.000000000 +0300
+++ src/corelib/ncbifile.cpp
@@ -3644,7 +3644,7 @@ static void s_AddEntry(CDir::TEntries*
 
     if (flags & CDir::fCreateObjects) {
         CDirEntry::EType type = CDir::eUnknown;
-#  if defined(_DIRENT_HAVE_D_TYPE)
+#  if defined(_DIRENT_HAVE_D_TYPE) && !defined(__DragonFly__)
         struct stat st;
         if (entry->d_type) {
             st.st_mode = DTTOIF(entry->d_type);
