--- libraries/Cabal/Cabal/src/Distribution/Simple/GHC/Build/Link.hs.orig	2026-03-26 05:07:17 UTC
+++ libraries/Cabal/Cabal/src/Distribution/Simple/GHC/Build/Link.hs
@@ -608,7 +608,7 @@ getRPaths pbci = do
         _ -> False
     supportRPaths OpenBSD = False
     supportRPaths NetBSD = False
-    supportRPaths DragonFly = False
+    supportRPaths DragonFly = True
     supportRPaths Solaris = False
     supportRPaths AIX = False
     supportRPaths HPUX = False
