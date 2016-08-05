--- rtrmgr/lex.boot.cc.intermediate	2016-08-05 12:46:25 UTC
+++ rtrmgr/lex.boot.cc
@@ -23,7 +23,7 @@
  * $FreeBSD: src/usr.bin/lex/flex.skl,v 1.8 2004/01/06 19:03:44 nectar Exp $
  */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/cdefs.h>
 #else
 #define __unused
