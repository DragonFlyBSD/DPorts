
$FreeBSD: ports/devel/cook/files/patch-common_ac_time.h,v 1.2 2012/11/17 05:55:38 svnexp Exp $

--- common/ac/time.h.orig	Fri Nov 29 23:15:13 2002
+++ common/ac/time.h	Fri Nov 29 23:15:27 2002
@@ -29,7 +29,7 @@
  * Catch-22: Dec Alpha OSF/1: need to include time.h before sys/time.h
  * before time.h
  */
-#ifdef __alpha__
+#ifdef __osf1__
 #ifndef _CLOCK_ID_T
 #define _CLOCK_ID_T
 typedef int clockid_t;
