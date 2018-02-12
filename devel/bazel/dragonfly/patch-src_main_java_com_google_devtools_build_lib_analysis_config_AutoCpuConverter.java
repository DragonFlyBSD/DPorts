--- src/main/java/com/google/devtools/build/lib/analysis/config/AutoCpuConverter.java.orig	1979-12-31 23:00:00 UTC
+++ src/main/java/com/google/devtools/build/lib/analysis/config/AutoCpuConverter.java
@@ -60,6 +60,8 @@ public class AutoCpuConverter implements
             default:
               return "unknown";
           }
+        case DRAGONFLY:
+              return "dragonfly";
         default:
           return "unknown";
       }
@@ -81,6 +83,8 @@ public class AutoCpuConverter implements
       return Pair.of(CPU.getCurrent(), OS.FREEBSD);
     } else if (input.startsWith("x64_windows")) {
       return Pair.of(CPU.getCurrent(), OS.WINDOWS);
+    } else if (input.startsWith("dragonfly")) {
+      return Pair.of(CPU.getCurrent(), OS.DRAGONFLY);
     }
 
     // Handle the Linux cases.
