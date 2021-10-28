--- packages/iconvenc/fpmake.pp.orig	2021-10-23 16:26:19.390401000 +0200
+++ packages/iconvenc/fpmake.pp	2021-10-23 16:26:43.859858000 +0200
@@ -20,7 +20,7 @@
     P.Version:='3.2.2';
     P.Author := 'Marco van de Voort';
     P.License := 'Library: LGPL2 or later, header: LGPL with modification, ';
-    P.OSes := [beos,haiku,freebsd,darwin,iphonesim,ios,solaris,linux,aix];
+    P.OSes := [beos,haiku,dragonfly,freebsd,darwin,iphonesim,ios,solaris,linux,aix];
     P.HomepageURL := 'www.freepascal.org';
     P.Email := '';
     P.Description := 'A libiconv header translation.';
