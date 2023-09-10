--- hadrian/src/Settings/Packages.hs.orig	2023-08-05 17:19:02 UTC
+++ hadrian/src/Settings/Packages.hs
@@ -157,7 +157,7 @@ packageArgs = do
         -- does not need it since it exports all dynamic symbols by default
         , package iserv
           ? expr isElfTarget
-          ? notM (expr $ anyTargetOs ["freebsd", "solaris2"])? mconcat
+          ? notM (expr $ anyTargetOs ["freebsd", "solaris2", "dragonfly"])? mconcat
           [ builder (Ghc LinkHs) ? arg "-optl-Wl,--export-dynamic" ]
 
         -------------------------------- haddock -------------------------------
