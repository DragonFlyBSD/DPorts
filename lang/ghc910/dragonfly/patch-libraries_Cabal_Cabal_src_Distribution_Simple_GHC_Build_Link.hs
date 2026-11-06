--- libraries/Cabal/Cabal/src/Distribution/Simple/GHC/Build/Link.hs.orig	2025-09-10 16:05:57 UTC
+++ libraries/Cabal/Cabal/src/Distribution/Simple/GHC/Build/Link.hs
@@ -511,7 +511,7 @@ getRPaths pbci = do
         _ -> False
     supportRPaths OpenBSD = False
     supportRPaths NetBSD = False
-    supportRPaths DragonFly = False
+    supportRPaths DragonFly = True
     supportRPaths Solaris = False
     supportRPaths AIX = False
     supportRPaths HPUX = False
