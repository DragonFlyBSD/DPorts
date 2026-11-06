--- hadrian/src/Settings/Packages.hs.orig	2026-03-26 05:06:13 UTC
+++ hadrian/src/Settings/Packages.hs
@@ -185,7 +185,7 @@ packageArgs = do
         -- does not need it since it exports all dynamic symbols by default
         , package iserv
           ? expr isElfTarget
-          ? notM (expr $ anyTargetOs [OSFreeBSD, OSSolaris2])? mconcat
+          ? notM (expr $ anyTargetOs [OSFreeBSD, OSSolaris2, OSDragonFly])? mconcat
           [ builder (Ghc LinkHs) ? arg "-optl-Wl,--export-dynamic" ]
 
         -------------------------------- haddock -------------------------------
