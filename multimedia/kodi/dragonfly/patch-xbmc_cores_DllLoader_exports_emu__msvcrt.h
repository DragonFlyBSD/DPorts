--- xbmc/cores/DllLoader/exports/emu_msvcrt.h.orig	2018-08-04 14:26:35.490836000 +0200
+++ xbmc/cores/DllLoader/exports/emu_msvcrt.h	2018-08-04 14:27:04.821468000 +0200
@@ -24,7 +24,7 @@
 #define _onexit_t void*
 #endif
 
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_ANDROID)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY) || defined(TARGET_ANDROID)
 typedef off_t __off_t;
 typedef int64_t off64_t;
 typedef off64_t __off64_t;
@@ -139,7 +139,7 @@ extern "C"
   uintptr_t dll_beginthread(void( *start_address )( void * ),unsigned stack_size,void *arglist);
   HANDLE dll_beginthreadex(LPSECURITY_ATTRIBUTES lpThreadAttributes, DWORD dwStackSize,
                            LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags,
-#ifdef TARGET_FREEBSD
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
                            LPLONG lpThreadId);
 #else
                            LPDWORD lpThreadId);
