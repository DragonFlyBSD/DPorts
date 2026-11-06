--- hadrian/src/Oracles/Setting.hs.orig	2025-03-02 13:05:33 UTC
+++ hadrian/src/Oracles/Setting.hs
@@ -287,7 +287,7 @@ hostSupportsRPaths :: Action Bool
 -- TODO: Windows supports lazy binding (but GHC doesn't currently support
 --       dynamic way on Windows anyways).
 hostSupportsRPaths :: Action Bool
-hostSupportsRPaths = anyHostOs ["linux", "darwin", "freebsd"]
+hostSupportsRPaths = anyHostOs ["linux", "darwin", "freebsd", "dragonfly"]
 
 -- | Check whether the target supports GHCi.
 ghcWithInterpreter :: Action Bool
