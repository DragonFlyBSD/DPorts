--- Size.xs.orig	2008-08-16 14:05:36 UTC
+++ Size.xs
@@ -6,7 +6,7 @@ extern "C" {
 #include "perl.h"
 #include "XSUB.h"
 
-#ifndef _AIX
+#if !defined(_AIX) && !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
 #else
 #include <termios.h>
