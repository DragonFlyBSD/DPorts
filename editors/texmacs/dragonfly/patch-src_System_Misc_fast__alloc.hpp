--- src/System/Misc/fast_alloc.hpp.orig	2015-03-06 17:26:43 UTC
+++ src/System/Misc/fast_alloc.hpp
@@ -378,6 +378,7 @@ tm_delete_array (C* Ptr) {
 
 #if defined(NO_FAST_ALLOC) || defined(X11TEXMACS)
 
+#ifndef __DragonFly__
 #ifndef NO_FAST_ALLOC
 #ifdef OS_IRIX
 void* operator new (register size_t s) throw(std::bad_alloc);
@@ -391,6 +392,7 @@ void* operator new[] (register size_t s)
 void  operator delete[] (register void* ptr);
 #endif
 #endif // not defined NO_FAST_ALLOC
+#endif
 
 template<typename C> inline C*
 tm_new () {
