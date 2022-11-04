--- libraries/Cabal/Cabal/src/Distribution/Simple/GHC.hs.orig	2022-07-27 07:28:45 UTC
+++ libraries/Cabal/Cabal/src/Distribution/Simple/GHC.hs
@@ -1737,7 +1737,7 @@ getRPaths lbi clbi | supportRPaths hostO
         _                                              -> False
     supportRPaths OpenBSD     = False
     supportRPaths NetBSD      = False
-    supportRPaths DragonFly   = False
+    supportRPaths DragonFly   = True
     supportRPaths Solaris     = False
     supportRPaths AIX         = False
     supportRPaths HPUX        = False
