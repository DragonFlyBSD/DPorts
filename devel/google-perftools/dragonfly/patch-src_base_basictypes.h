--- src/base/basictypes.h.orig	2020-02-23 20:15:47 UTC
+++ src/base/basictypes.h
@@ -111,7 +111,7 @@ const  int64 kint64min =  ( (((uint64) k
 // Also allow for printing of a pthread_t.
 #define GPRIuPTHREAD "lu"
 #define GPRIxPTHREAD "lx"
-#if defined(__CYGWIN__) || defined(__CYGWIN32__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__CYGWIN__) || defined(__CYGWIN32__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define PRINTABLE_PTHREAD(pthreadt) reinterpret_cast<uintptr_t>(pthreadt)
 #else
 #define PRINTABLE_PTHREAD(pthreadt) pthreadt
