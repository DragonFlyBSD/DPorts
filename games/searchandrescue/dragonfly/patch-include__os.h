--- include/os.h.orig	2004-08-06 01:34:20.000000000 +0300
+++ include/os.h
@@ -21,7 +21,7 @@
 
 #include <limits.h>
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # include <paths.h>
 #endif
 
@@ -57,7 +57,7 @@
 # define _PATH_DEVNULL		"/dev/null"
 #endif
 
-#if !defined(_AIX) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(_AIX) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 # ifndef _PATH_MAILDIR
 #  define _PATH_MAILDIR		"/var/spool/mail"
 # endif
@@ -250,7 +250,7 @@
 /* Bit types still not defined? */
 #if !defined(__BIT_TYPES_DEFINED__) && !defined(__MSW__) && !defined(__hpux)
 //#define __BIT_TYPES_DEFINED__ Dan S: Multiple declaration problem.
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 
 // typedef char			int8_t;  Dan S: multiple declaration problem.
 typedef unsigned char           u_int8_t;
