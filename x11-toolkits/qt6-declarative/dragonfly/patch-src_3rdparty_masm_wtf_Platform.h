--- src/3rdparty/masm/wtf/Platform.h.orig	2022-12-12 14:33:20 UTC
+++ src/3rdparty/masm/wtf/Platform.h
@@ -449,6 +449,7 @@
 #if   OS(AIX)              \
     || OS(DARWIN)           \
     || OS(FREEBSD)          \
+    || OS(DRAGONFLY)        \
     || OS(HURD)             \
     || OS(INTEGRITY)        \
     || OS(LINUX)            \
@@ -637,7 +638,7 @@
 #define HAVE_LANGINFO_H 1
 #endif
 
-#if (OS(FREEBSD) || OS(OPENBSD)) && !defined(__GLIBC__)
+#if (OS(FREEBSD) || OS(OPENBSD) || OS(DRAGONFLY)) && !defined(__GLIBC__)
 #define HAVE_PTHREAD_NP_H 1
 #endif
 
@@ -648,7 +649,7 @@
 #endif
 
 #if !defined(HAVE_STRNSTR)
-#if OS(DARWIN) || (OS(FREEBSD) && !defined(__GLIBC__))
+#if OS(DARWIN) || (OS(FREEBSD) || OS(DRAGONFLY) && !defined(__GLIBC__))
 #define HAVE_STRNSTR 1
 #endif
 #endif
