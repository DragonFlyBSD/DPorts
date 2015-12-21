--- packages/iconvenc/fpmake.pp.orig	2015-11-13 21:15:29 UTC
+++ packages/iconvenc/fpmake.pp
@@ -19,7 +19,7 @@ begin
     P.Version:='3.0.0';
     P.Author := 'Marco van de Voort';
     P.License := 'Library: LGPL2 or later, header: LGPL with modification, ';
-    P.OSes := [beos,haiku,freebsd,darwin,iphonesim,solaris,linux,aix];
+    P.OSes := [beos,haiku,dragonfly,freebsd,darwin,iphonesim,solaris,linux,aix];
     P.HomepageURL := 'www.freepascal.org';
     P.Email := '';
     P.Description := 'A libiconv header translation.';
