
$FreeBSD: ports/misc/yaunc/files/patch-yaunc.h,v 1.2 2012/11/17 05:59:47 svnexp Exp $

--- yaunc.h.orig	Fri Mar 14 07:14:11 2003
+++ yaunc.h	Sun Apr 27 19:15:49 2003
@@ -107,8 +107,6 @@
 int Socket(int, int, int );
 
 /* other networking function */
-int inet_pton(int, const char *, void *);
-const char * inet_ntop(int, const void *, char *, size_t);
 void Inet_pton(int, const char *, void *);
 
 /* non-networking stuff */
