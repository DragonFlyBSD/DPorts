--- hadrian/src/Settings/Packages.hs.orig	2024-11-27 22:03:56 UTC
+++ hadrian/src/Settings/Packages.hs
@@ -163,7 +163,7 @@ packageArgs = do
         -- does not need it since it exports all dynamic symbols by default
         , package iserv
           ? expr isElfTarget
-          ? notM (expr $ anyTargetOs ["freebsd", "solaris2"])? mconcat
+          ? notM (expr $ anyTargetOs ["freebsd", "solaris2", "dragonfly"])? mconcat
           [ builder (Ghc LinkHs) ? arg "-optl-Wl,--export-dynamic" ]
 
         -------------------------------- haddock -------------------------------
