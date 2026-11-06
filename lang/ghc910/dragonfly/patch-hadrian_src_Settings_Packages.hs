--- hadrian/src/Settings/Packages.hs.orig	2025-09-10 16:02:37 UTC
+++ hadrian/src/Settings/Packages.hs
@@ -171,7 +171,7 @@ packageArgs = do
         -- does not need it since it exports all dynamic symbols by default
         , package iserv
           ? expr isElfTarget
-          ? notM (expr $ anyTargetOs [OSFreeBSD, OSSolaris2])? mconcat
+          ? notM (expr $ anyTargetOs [OSFreeBSD, OSSolaris2, OSDragonFly])? mconcat
           [ builder (Ghc LinkHs) ? arg "-optl-Wl,--export-dynamic" ]
 
         -------------------------------- haddock -------------------------------
