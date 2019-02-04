--- xbmc/cores/DllLoader/exports/emu_msvcrt.cpp.orig	2017-11-14 17:55:01.000000000 +0100
+++ xbmc/cores/DllLoader/exports/emu_msvcrt.cpp	2018-08-04 19:04:31.541800000 +0200
@@ -28,13 +28,13 @@
 #include <process.h>
 #include <errno.h>
 #else
-#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD)
+#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
 #include <mntent.h>
 #endif
 #endif
 #include <sys/stat.h>
 #include <sys/types.h>
-#if !defined(TARGET_FREEBSD) && (!defined(TARGET_ANDROID) && defined(__LP64__))
+#if !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY) && (!defined(TARGET_ANDROID) && defined(__LP64__))
 #include <sys/timeb.h>
 #endif
 #include "system.h" // for HAS_DVD_DRIVE
@@ -43,7 +43,7 @@
     #include <sys/ioctl.h>
     #if defined(TARGET_DARWIN)
       #include <IOKit/storage/IODVDMediaBSDClient.h>
-    #elif !defined(TARGET_FREEBSD)
+    #elif !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
       #include <linux/cdrom.h>
     #endif
   #endif
@@ -482,7 +482,7 @@ extern "C"
       int nmode = convert_fmode(mode);
       if( (o->mode & nmode) != nmode)
         CLog::Log(LOGWARNING, "dll_fdopen - mode 0x%x differs from fd mode 0x%x", nmode, o->mode);
-      return &o->file_emu;
+      return (FILE *)&o->file_emu;
     }
     else if (!IS_STD_DESCRIPTOR(fd))
     {
@@ -545,7 +545,7 @@ extern "C"
         return -1;
       }
       object->mode = iMode;
-      return g_emuFileWrapper.GetDescriptorByStream(&object->file_emu);
+      return g_emuFileWrapper.GetDescriptorByStream((FILE *)&object->file_emu);
     }
     delete pFile;
     return -1;
@@ -1333,7 +1333,7 @@ extern "C"
     {
       // it might be something else than a file, or the file is not emulated
       // let the operating system handle it
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
       return fseek(stream, offset, origin);
 #else
       return fseeko64(stream, offset, origin);
@@ -1398,7 +1398,7 @@ extern "C"
     {
       // it might be something else than a file, or the file is not emulated
       // let the operating system handle it
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
       return ftello(stream);
 #else
       return ftello64(stream);
@@ -1444,7 +1444,7 @@ extern "C"
       CLog::Log(LOGWARNING, "msvcrt.dll: dll_telli64 called, TODO: add 'int64 -> long' type checking");      //warning
 #ifndef TARGET_POSIX
       return (__int64)tell(fd);
-#elif defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#elif defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
       return lseek(fd, 0, SEEK_CUR);
 #else
       return lseek64(fd, 0, SEEK_CUR);
@@ -1622,7 +1622,7 @@ extern "C"
     int ret;
 
     ret = dll_fgetpos64(stream, &tmpPos);
-#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
     *pos = (fpos_t)tmpPos;
 #else
     pos->__pos = (off_t)tmpPos.__pos;
@@ -1635,7 +1635,7 @@ extern "C"
     CFile* pFile = g_emuFileWrapper.GetFileXbmcByStream(stream);
     if (pFile != NULL)
     {
-#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
       *pos = pFile->GetPosition();
 #else
       pos->__pos = pFile->GetPosition();
@@ -1657,7 +1657,7 @@ extern "C"
     int fd = g_emuFileWrapper.GetDescriptorByStream(stream);
     if (fd >= 0)
     {
-#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
       if (dll_lseeki64(fd, *pos, SEEK_SET) >= 0)
 #else
       if (dll_lseeki64(fd, (__off64_t)pos->__pos, SEEK_SET) >= 0)
@@ -1674,7 +1674,7 @@ extern "C"
     {
       // it might be something else than a file, or the file is not emulated
       // let the operating system handle it
-#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
       return fsetpos(stream, pos);
 #else
       return fsetpos64(stream, pos);
@@ -1690,7 +1690,7 @@ extern "C"
     if (fd >= 0)
     {
       fpos64_t tmpPos;
-#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if !defined(TARGET_POSIX) || defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
       tmpPos= *pos;
 #else
       tmpPos.__pos = (off64_t)(pos->__pos);
@@ -2160,7 +2160,7 @@ extern "C"
      if (!pFile)
        return -1;
 
-#if defined(HAS_DVD_DRIVE) && !defined(TARGET_FREEBSD)
+#if defined(HAS_DVD_DRIVE) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
 #if !defined(TARGET_DARWIN)
     if(request == DVD_READ_STRUCT || request == DVD_AUTH)
 #else
