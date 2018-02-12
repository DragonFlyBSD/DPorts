--- src/main/java/com/google/devtools/build/lib/bazel/rules/BazelConfiguration.java.orig	1979-12-31 23:00:00 UTC
+++ src/main/java/com/google/devtools/build/lib/bazel/rules/BazelConfiguration.java
@@ -106,6 +106,7 @@ public class BazelConfiguration extends
       ImmutableMap.<OS, PathFragment>builder()
           .put(OS.WINDOWS, PathFragment.create("c:/tools/msys64/usr/bin/bash.exe"))
           .put(OS.FREEBSD, PathFragment.create("/usr/local/bin/bash"))
+          .put(OS.DRAGONFLY, PathFragment.create("/usr/local/bin/bash"))
           .build();
   private static final PathFragment FALLBACK_SHELL = PathFragment.create("/bin/bash");
 
