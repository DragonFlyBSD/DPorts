--- configure.ml.orig	2016-12-08 17:13:52.000000000 +0200
+++ configure.ml
@@ -809,7 +809,7 @@ let strip =
 (** * md5sum command *)
 
 let md5sum =
-  if List.mem arch ["Darwin"; "FreeBSD"; "OpenBSD"]
+  if List.mem arch ["Darwin"; "DragonFly"; "FreeBSD"; "OpenBSD"]
   then "md5 -q" else "md5sum"
 
 
