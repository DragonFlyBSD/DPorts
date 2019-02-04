--- xbmc/cores/DllLoader/exports/util/EmuFileWrapper.h.orig	2018-08-04 16:58:11.477690000 +0200
+++ xbmc/cores/DllLoader/exports/util/EmuFileWrapper.h	2018-08-04 16:58:28.718063000 +0200
@@ -47,7 +47,7 @@ struct kodi_iobuf {
 
 typedef struct stEmuFileObject
 {
-  FILE    file_emu;
+  struct __FILE_public    file_emu;
   XFILE::CFile*  file_xbmc;
   CCriticalSection *file_lock;
   int mode;
