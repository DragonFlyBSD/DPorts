--- src/fcl_data.ml.orig	2004-09-08 09:51:02.000000000 +0000
+++ src/fcl_data.ml
@@ -16,7 +16,7 @@ end
 
 module Hashtbl = struct
   type ('a, 'b) t = ('a, 'b) Hashtbl.t
-  let create = Hashtbl.create
+  let create n = Hashtbl.create n
   let get h = h
 
   let add h k d =
