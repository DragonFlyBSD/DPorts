--- rtl/unix/cwstring.pp.orig	2014-11-16 08:20:04.000000000 +0000
+++ rtl/unix/cwstring.pp
@@ -129,8 +129,13 @@ const
   CODESET = 51;
   LC_ALL = 0;
 {$else not NetBSD}
+{$ifdef DragonFly}
+  CODESET = 0;
+  LC_ALL = 0;
+{$else not DragonFly}
 {$error lookup the value of CODESET in /usr/include/langinfo.h, and the value of LC_ALL in /usr/include/locale.h for your OS }
 // and while doing it, check if iconv is in libc, and if the symbols are prefixed with iconv_ or libiconv_
+{$endif DragonFly}
 {$endif NetBSD}
 {$endif OpenBSD}
 {$endif beos}
