--- vendor/luajit/src/jit/bcsave.lua.orig	2014-12-08 00:07:09 UTC
+++ vendor/luajit/src/jit/bcsave.lua
@@ -69,7 +69,7 @@ local map_arch = {
 
 local map_os = {
   linux = true, windows = true, osx = true, freebsd = true, netbsd = true,
-  openbsd = true, solaris = true,
+  openbsd = true, dragonfly = true, solaris = true,
 }
 
 local function checkarg(str, map, err)
