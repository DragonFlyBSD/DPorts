--- libraries/base/System/Environment/ExecutablePath.hsc.orig	2025-03-02 13:05:33 UTC
+++ libraries/base/System/Environment/ExecutablePath.hsc
@@ -47,7 +47,7 @@ import System.Posix.Internals
 import Foreign.C
 import Foreign.Marshal.Array
 import System.Posix.Internals
-#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 import Control.Exception (catch, throw)
 import Foreign.C
 import Foreign.Marshal.Alloc
@@ -203,7 +203,7 @@ -- FreeBSD / NetBSD
 --------------------------------------------------------------------------------
 -- FreeBSD / NetBSD
 
-#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS)
+#elif defined(freebsd_HOST_OS) || defined(netbsd_HOST_OS) || defined(dragonfly_HOST_OS)
 
 foreign import ccall unsafe "sysctl"
   c_sysctl
@@ -232,7 +232,7 @@ getExecutablePath = do
   where
     barf = throwErrno "getExecutablePath"
     mib =
-#  if defined(freebsd_HOST_OS)
+#  if defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
       [ (#const CTL_KERN)
       , (#const KERN_PROC)
       , (#const KERN_PROC_PATHNAME)
