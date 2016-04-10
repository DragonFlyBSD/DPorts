--- gluegen/src/java/jogamp/common/os/PlatformPropsImpl.java.orig	2014-10-10 13:20:51 UTC
+++ gluegen/src/java/jogamp/common/os/PlatformPropsImpl.java
@@ -457,6 +457,9 @@ public abstract class PlatformPropsImpl
         if ( osLower.startsWith("linux") ) {
             return OSType.LINUX;
         }
+        if ( osLower.startsWith("dragonfly") ) {
+            return OSType.FREEBSD;
+        }
         if ( osLower.startsWith("freebsd") ) {
             return OSType.FREEBSD;
         }
