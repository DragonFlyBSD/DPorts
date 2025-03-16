--- src/main/java/com/google/devtools/build/lib/analysis/ShellConfiguration.java.orig	Tue Jan  1 00:00:00 1980
+++ src/main/java/com/google/devtools/build/lib/analysis/ShellConfiguration.java	Mon Mar
@@ -35,6 +35,7 @@ public class ShellConfiguration extends Fragment {
           .put(OS.WINDOWS, PathFragment.create("c:/tools/msys64/usr/bin/bash.exe"))
           .put(OS.FREEBSD, PathFragment.create("/usr/local/bin/bash"))
           .put(OS.OPENBSD, PathFragment.create("/usr/local/bin/bash"))
+          .put(OS.DRAGONFLY, PathFragment.create("/usr/local/bin/bash"))
           .build();
 
   private static Function<BuildOptions, PathFragment> shellExecutableFinder;
