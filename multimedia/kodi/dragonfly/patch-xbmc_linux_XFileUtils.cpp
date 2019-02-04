--- xbmc/linux/XFileUtils.cpp.orig	2018-08-04 14:59:20.053306000 +0200
+++ xbmc/linux/XFileUtils.cpp	2018-08-04 15:00:14.314482000 +0200
@@ -29,7 +29,7 @@
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <stdlib.h>
-#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_ANDROID)
+#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY) && !defined(TARGET_ANDROID)
 #include <sys/vfs.h>
 #else
 #include <sys/param.h>
@@ -148,7 +148,7 @@ HANDLE CreateFile(LPCTSTR lpFileName, DW
   HANDLE result = new CXHandle(CXHandle::HND_FILE);
   result->fd = fd;
 
-#if (defined(TARGET_LINUX) || defined(TARGET_FREEBSD)) && defined(HAS_DVD_DRIVE) 
+#if (defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)) && defined(HAS_DVD_DRIVE) 
   // special case for opening the cdrom device
   if (strcmp(lpFileName, MEDIA_DETECT::CLibcdio::GetInstance()->GetDeviceFileName())==0)
     result->m_bCDROM = true;
@@ -224,7 +224,7 @@ DWORD  SetFilePointer(HANDLE hFile, int3
     nMode = SEEK_END;
 
   off64_t currOff;
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   currOff = lseek(hFile->fd, offset, nMode);
 #else
   currOff = lseek64(hFile->fd, offset, nMode);
@@ -302,7 +302,7 @@ BOOL SetFilePointerEx(  HANDLE hFile,
 
   off64_t toMove = liDistanceToMove.QuadPart;
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   off64_t currOff = lseek(hFile->fd, toMove, nMode);
 #else
   off64_t currOff = lseek64(hFile->fd, toMove, nMode);
