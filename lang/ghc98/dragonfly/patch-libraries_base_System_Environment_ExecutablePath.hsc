--- libraries/base/System/Environment/ExecutablePath.hsc.orig	2024-11-27 22:03:57 UTC
+++ libraries/base/System/Environment/ExecutablePath.hsc
@@ -54,7 +54,7 @@ import System.Posix.Internals
 import Foreign.Marshal.Array
 import System.IO.Error (isDoesNotExistError)
 import System.Posix.Internals
-#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 import Control.Exception (catch, throw)
 import Foreign.C
 import Foreign.Marshal.Alloc
@@ -223,7 +223,7 @@ -- FreeBSD / NetBSD
 --------------------------------------------------------------------------------
 -- FreeBSD / NetBSD
 
-#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 
 foreign import ccall unsafe "sysctl"
   c_sysctl
@@ -252,7 +252,7 @@ getExecutablePath = do
   where
     barf = throwErrno "getExecutablePath"
     mib =
-#  if defined(freebsd_HOST_OS)
+#  if defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
       [ (#const CTL_KERN)
       , (#const KERN_PROC)
       , (#const KERN_PROC_PATHNAME)
