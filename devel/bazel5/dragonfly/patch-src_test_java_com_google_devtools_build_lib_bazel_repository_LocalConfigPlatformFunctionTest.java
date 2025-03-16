--- src/test/java/com/google/devtools/build/lib/bazel/repository/LocalConfigPlatformFunctionTest.java.orig	Tue Jan  1 00:00:00 1980
+++ src/test/java/com/google/devtools/build/lib/bazel/repository/LocalConfigPlatformFunctionTest.java	Mon Mar
@@ -88,6 +88,7 @@ public class LocalConfigPlatformFunctionTest {
           new Object[] {OS.DARWIN, "@platforms//os:osx"},
           new Object[] {OS.FREEBSD, "@platforms//os:freebsd"},
           new Object[] {OS.OPENBSD, "@platforms//os:openbsd"},
+          new Object[] {OS.DRAGONFLY, "@platforms//os:dragonfly"},
           new Object[] {OS.WINDOWS, "@platforms//os:windows"});
     }
 
