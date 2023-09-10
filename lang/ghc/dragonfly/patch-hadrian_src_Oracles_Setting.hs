--- hadrian/src/Oracles/Setting.hs.orig	2023-04-16 17:54:19 UTC
+++ hadrian/src/Oracles/Setting.hs
@@ -282,7 +282,7 @@ isElfTarget = anyTargetOs
 -- TODO: Windows supports lazy binding (but GHC doesn't currently support
 --       dynamic way on Windows anyways).
 hostSupportsRPaths :: Action Bool
-hostSupportsRPaths = anyHostOs ["linux", "darwin", "freebsd"]
+hostSupportsRPaths = anyHostOs ["linux", "darwin", "freebsd", "dragonfly"]
 
 -- | Check whether the target supports GHCi.
 ghcWithInterpreter :: Action Bool
