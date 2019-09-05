--- src/gmic.cpp.intermediate	2019-05-07 23:55:27.000000000 +0000
+++ src/gmic.cpp
@@ -1991,7 +1991,7 @@ double gmic::mp_ext(char *const str, voi
 // Manage correspondence between abort pointers and thread ids.
 CImgList<void*> gmic::list_p_is_abort = CImgList<void*>();
 bool *gmic::abort_ptr(bool *const p_is_abort) {
-#if defined(__MACOSX__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__MACOSX__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   void* tid = (void*)(cimg_ulong)getpid();
 #elif cimg_OS==1
   void* tid = (void*)(cimg_ulong)syscall(SYS_gettid);
@@ -2328,7 +2328,7 @@ gmic::~gmic() {
 #endif // #if cimg_display!=0
 
   cimg::mutex(21);
-#if defined(__MACOSX__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__MACOSX__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   void* tid = (void*)(cimg_ulong)getpid();
 #elif cimg_OS==1
   void* tid = (void*)(cimg_ulong)syscall(SYS_gettid);
