--- packages/libmicrohttpd/fpmake.pp.orig	2017-09-02 16:48:24 UTC
+++ packages/libmicrohttpd/fpmake.pp
@@ -24,7 +24,7 @@ begin
     P.Description := 'Event and threaded based micro-http server library interface';
     P.NeedLibC:= true;
     P.Dependencies.Add('rtl-extra');
-    P.OSes := [android,freebsd,linux,netbsd,openbsd,win32,win64];
+    P.OSes := [android,dragonfly,freebsd,linux,netbsd,openbsd,win32,win64];
     P.SourcePath.Add('src');
     P.IncludePath.Add('src');
     T:=P.Targets.AddUnit('libmicrohttpd.pp');
