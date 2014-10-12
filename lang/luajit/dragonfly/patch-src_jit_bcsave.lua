--- src/jit/bcsave.lua.orig	2014-10-12 14:08:38 UTC
+++ src/jit/bcsave.lua
@@ -69,7 +69,7 @@
 
 local map_os = {
   linux = true, windows = true, osx = true, freebsd = true, netbsd = true,
-  openbsd = true, solaris = true,
+  openbsd = true, dragonfly = true, solaris = true,
 }
 
 local function checkarg(str, map, err)
