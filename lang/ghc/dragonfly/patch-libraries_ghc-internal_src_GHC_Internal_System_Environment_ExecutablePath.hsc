--- libraries/ghc-internal/src/GHC/Internal/System/Environment/ExecutablePath.hsc.orig	2026-03-26 05:06:13 UTC
+++ libraries/ghc-internal/src/GHC/Internal/System/Environment/ExecutablePath.hsc
@@ -68,7 +68,7 @@ import GHC.Internal.System.Posix.Internals
 import GHC.Internal.Foreign.Marshal.Array
 import GHC.Internal.System.IO.Error (isDoesNotExistError)
 import GHC.Internal.System.Posix.Internals
-#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 import GHC.Internal.Control.Exception (catch, throw)
 import GHC.Internal.Data.Functor
 import GHC.Internal.Foreign.C.Types
@@ -245,7 +245,7 @@ -- FreeBSD / NetBSD
 --------------------------------------------------------------------------------
 -- FreeBSD / NetBSD
 
-#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 
 foreign import ccall unsafe "sysctl"
   c_sysctl
@@ -274,7 +274,7 @@ getExecutablePath = do
   where
     barf = throwErrno "getExecutablePath"
     mib =
-#  if defined(freebsd_HOST_OS)
+#  if defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
       [ (#const CTL_KERN)
       , (#const KERN_PROC)
       , (#const KERN_PROC_PATHNAME)
