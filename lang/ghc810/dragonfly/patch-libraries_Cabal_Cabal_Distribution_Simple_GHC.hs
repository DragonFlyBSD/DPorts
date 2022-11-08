--- libraries/Cabal/Cabal/Distribution/Simple/GHC.hs.intermediate	2015-08-23 08:24:31 UTC
+++ libraries/Cabal/Cabal/Distribution/Simple/GHC.hs
@@ -878,7 +878,7 @@ getRPaths lbi clbi | supportRPaths hostO
     supportRPaths FreeBSD     = True
     supportRPaths OpenBSD     = False
     supportRPaths NetBSD      = False
-    supportRPaths DragonFly   = False
+    supportRPaths DragonFly   = True
     supportRPaths Solaris     = False
     supportRPaths AIX         = False
     supportRPaths HPUX        = False
