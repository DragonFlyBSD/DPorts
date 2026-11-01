--- vendor/e2fsprogs/lib/config.h.orig
+++ vendor/e2fsprogs/lib/config.h
@@ -1,4 +1,4 @@
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
 #define HAVE_MALLOC_H 1
 #endif
 
@@ -28,7 +28,7 @@
 #define HAVE_UTIME_H 1
 
 #define HAVE_SYS_STAT_H 1
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 # define HAVE_SYS_SYSMACROS_H 1
 #endif
 #define HAVE_SYS_TIME_H 1
@@ -37,7 +37,7 @@
 #if defined(_WIN32)
 # define HAVE_LINUX_TYPES_H 1
 #endif
-#if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # define HAVE_FCNTL 1
 # define HAVE_FSYNC 1
 # define HAVE_GETPAGESIZE 1
@@ -54,7 +54,7 @@
 # define HAVE_SYS_SELECT_H 1
 # define HAVE_SYS_WAIT_H 1
 #endif
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # define HAVE_GETMNTINFO 1
 #endif
 #if defined(__linux__)
