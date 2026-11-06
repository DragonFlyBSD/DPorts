--- hadrian/src/Settings/Packages.hs.orig	2025-03-02 13:05:33 UTC
+++ hadrian/src/Settings/Packages.hs
@@ -158,7 +158,7 @@ packageArgs = do
         -- does not need it since it exports all dynamic symbols by default
         , package iserv
           ? expr isElfTarget
-          ? notM (expr $ anyTargetOs ["freebsd", "solaris2"])? mconcat
+          ? notM (expr $ anyTargetOs ["freebsd", "solaris2", "dragonfly"])? mconcat
           [ builder (Ghc LinkHs) ? arg "-optl-Wl,--export-dynamic" ]
 
         -------------------------------- haddock -------------------------------
