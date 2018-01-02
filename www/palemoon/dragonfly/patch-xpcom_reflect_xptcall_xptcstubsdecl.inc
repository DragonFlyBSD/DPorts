--- xpcom/reflect/xptcall/xptcstubsdecl.inc.orig	2017-11-23 08:28:13 UTC
+++ xpcom/reflect/xptcall/xptcstubsdecl.inc
@@ -8,7 +8,7 @@
 *  1 is AddRef
 *  2 is Release
 */
-#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__))
+#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__))
 NS_IMETHOD Stub3();
 NS_IMETHOD Stub4();
 NS_IMETHOD Stub5();
