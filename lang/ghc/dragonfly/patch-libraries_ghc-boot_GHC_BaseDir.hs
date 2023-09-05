--- libraries/ghc-boot/GHC/BaseDir.hs.orig	2023-04-16 17:54:20 UTC
+++ libraries/ghc-boot/GHC/BaseDir.hs
@@ -23,7 +23,7 @@ import System.FilePath
 #if defined(mingw32_HOST_OS)
 import System.Environment (getExecutablePath)
 -- POSIX
-#elif defined(darwin_HOST_OS) || defined(linux_HOST_OS) || defined(freebsd_HOST_OS) || defined(openbsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(darwin_HOST_OS) || defined(linux_HOST_OS) || defined(freebsd_HOST_OS) || defined(openbsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 import System.Environment (getExecutablePath)
 #endif
 
@@ -52,7 +52,7 @@ getBaseDir = Just . (\p -> p </> "lib")
     -- that is running this function.
     rootDir :: FilePath -> FilePath
     rootDir = takeDirectory . takeDirectory . normalise
-#elif defined(darwin_HOST_OS) || defined(linux_HOST_OS) || defined(freebsd_HOST_OS) || defined(openbsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(darwin_HOST_OS) || defined(linux_HOST_OS) || defined(freebsd_HOST_OS) || defined(openbsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 -- on unix, this is a bit more confusing.
 -- The layout right now is something like
 --
