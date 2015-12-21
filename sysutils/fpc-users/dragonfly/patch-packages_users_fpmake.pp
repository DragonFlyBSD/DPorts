--- packages/users/fpmake.pp.orig	2015-11-13 21:15:29 UTC
+++ packages/users/fpmake.pp
@@ -20,7 +20,7 @@ begin
     P.Author := 'Michael van Canneyt, Marco van de Voort';
     P.License := 'LGPL with modification, ';
     P.HomepageURL := 'www.freepascal.org';
-    P.OSes := [freebsd,linux];
+    P.OSes := [dragonfly,freebsd,linux];
     P.Email := '';
     P.Description := 'Headers to access Unix groups and users.';
     P.NeedLibC:= false;
