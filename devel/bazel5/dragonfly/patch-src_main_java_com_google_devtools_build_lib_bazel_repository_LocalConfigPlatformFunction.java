--- src/main/java/com/google/devtools/build/lib/bazel/repository/LocalConfigPlatformFunction.java.orig	Tue Jan  1 00:00:00 1980
+++ src/main/java/com/google/devtools/build/lib/bazel/repository/LocalConfigPlatformFunction.java	Mon Mar
@@ -135,6 +135,8 @@ public class LocalConfigPlatformFunction extends Repos
         return "@platforms//os:freebsd";
       case OPENBSD:
         return "@platforms//os:openbsd";
+      case DRAGONFLY:
+        return "@platforms//os:dragonfly";
       case LINUX:
         return "@platforms//os:linux";
       case WINDOWS:
