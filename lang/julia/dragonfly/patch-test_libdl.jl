--- test/libdl.jl.orig	2016-09-20 05:54:22.000000000 +0300
+++ test/libdl.jl
@@ -177,7 +177,7 @@ let dl = C_NULL
     end
 end
 
-if Sys.KERNEL in (:Linux, :FreeBSD)
+if Sys.KERNEL in (:Linux, :DragonFly, :FreeBSD)
     ccall(:jl_read_sonames, Void, ())
 end
 
