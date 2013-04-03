--- compiler/utils/Platform.hs.orig	2012-06-06 17:10:25.000000000 +0000
+++ compiler/utils/Platform.hs
@@ -53,6 +53,7 @@ data OS
         | OSSolaris2
         | OSMinGW32
         | OSFreeBSD
+        | OSDragonFly
         | OSOpenBSD
         | OSNetBSD
         | OSKFreeBSD
@@ -83,6 +84,7 @@ target32Bit p = platformWordSize p == 4
 osElfTarget :: OS -> Bool
 osElfTarget OSLinux    = True
 osElfTarget OSFreeBSD  = True
+osElfTarget OSDragonFly = True
 osElfTarget OSOpenBSD  = True
 osElfTarget OSNetBSD   = True
 osElfTarget OSSolaris2 = True
