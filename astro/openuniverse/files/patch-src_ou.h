$FreeBSD: ports/astro/openuniverse/files/patch-src_ou.h,v 1.2 2012/11/17 05:54:25 svnexp Exp $

--- src/ou.h.orig	Sun Jun  4 12:35:09 2000
+++ src/ou.h	Tue Nov  5 12:17:24 2002
@@ -19,6 +19,7 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <string.h>
 #include <math.h>
 
 #ifdef WIN32
