As FreeBSD's files/ patch for FreeBSD: DragonFly is ELF, so the Linux
linker model answers GET_RUNTIME_DEPENDENCIES and RUNTIME_DEPENDENCY_SET.

--- Source/cmRuntimeDependencyArchive.cxx.orig
+++ Source/cmRuntimeDependencyArchive.cxx
@@ -153,7 +153,7 @@
       platform = "macos+macho";
     } else if (systemName == "Linux") {
       platform = "linux+elf";
-    } else if (systemName == "FreeBSD") {
+    } else if (systemName == "FreeBSD" || systemName == "DragonFly") {
       platform = "freebsd+elf";
     }
   }
@@ -405,6 +405,6 @@
   const std::string& platform)
 {
   static const std::set<std::string> supportedPlatforms = { "Windows", "Linux",
-                                                            "Darwin", "FreeBSD" };
+                                                            "Darwin", "FreeBSD", "DragonFly" };
   return supportedPlatforms.count(platform);
 }
