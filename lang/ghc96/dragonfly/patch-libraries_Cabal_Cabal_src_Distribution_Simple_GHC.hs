--- libraries/Cabal/Cabal/src/Distribution/Simple/GHC.hs.orig	2025-03-02 13:05:58 UTC
+++ libraries/Cabal/Cabal/src/Distribution/Simple/GHC.hs
@@ -1826,7 +1826,7 @@ getRPaths lbi clbi | supportRPaths hostOS = do
         _                                              -> False
     supportRPaths OpenBSD     = False
     supportRPaths NetBSD      = False
-    supportRPaths DragonFly   = False
+    supportRPaths DragonFly   = True
     supportRPaths Solaris     = False
     supportRPaths AIX         = False
     supportRPaths HPUX        = False
