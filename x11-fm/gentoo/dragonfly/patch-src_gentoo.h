--- src/gentoo.h.orig	2014-11-23 15:19:34.000000000 +0200
+++ src/gentoo.h
@@ -13,7 +13,7 @@
 
 #include "config.h"
 
-#if !(defined __osf__ && defined __alpha__) && !defined __NetBSD__ && !defined __FreeBSD__ && !defined __sgi
+#if !(defined __osf__ && defined __alpha__) && !defined __NetBSD__ && !defined __FreeBSD__ && !defined __DragonFly__ && !defined __sgi
  #if !defined __EXTENSIONS__
   #define __EXTENSIONS__
  #endif
@@ -50,7 +50,7 @@
 ** and save some typing in various tests below. This should probably all
 ** be replaced by proper Autoconfed stuff at some point.
 */
-#if defined __OpenBSD__ || defined __FreeBSD__ || defined __NetBSD__
+#if defined __OpenBSD__ || defined __FreeBSD__ || defined __NetBSD__ || defined __DragonFly__
 #define GENTOO_ON_BSD
 #endif
 
