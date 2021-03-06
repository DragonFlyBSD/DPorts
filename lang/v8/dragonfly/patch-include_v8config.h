Less patches elsewhere

--- include/v8config.h.orig	2021-03-05 16:35:02.000000000 +0000
+++ include/v8config.h
@@ -108,6 +108,7 @@
 # define V8_OS_POSIX 1
 #elif defined(__DragonFly__)
 # define V8_OS_BSD 1
+# define V8_OS_FREEBSD 1
 # define V8_OS_DRAGONFLYBSD 1
 # define V8_OS_POSIX 1
 #elif defined(__NetBSD__)
