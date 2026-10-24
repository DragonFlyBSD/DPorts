--- src/main/java/com/google/devtools/build/lib/analysis/ShellConfiguration.java.orig	1980-01-01 08:00:00 UTC
+++ src/main/java/com/google/devtools/build/lib/analysis/ShellConfiguration.java
@@ -36,6 +36,7 @@ public class ShellConfiguration extends
       ImmutableMap.<OS, PathFragment>builder()
           .put(OS.WINDOWS, PathFragment.create("c:/tools/msys64/usr/bin/bash.exe"))
           .put(OS.FREEBSD, PathFragment.create("/usr/local/bin/bash"))
+          .put(OS.DRAGONFLY, PathFragment.create("/usr/local/bin/bash"))
           .build();
 
   private final PathFragment shellExecutable;
