--- src/main/java/com/google/devtools/build/lib/analysis/config/AutoCpuConverter.java.orig	Tue Jan  1 00:00:00 1980
+++ src/main/java/com/google/devtools/build/lib/analysis/config/AutoCpuConverter.java	Mon Mar
@@ -46,6 +46,8 @@ public class AutoCpuConverter implements Converter<Str
           return "freebsd";
         case OPENBSD:
           return "openbsd";
+        case DRAGONFLY:
+	  return "dragonfly";
         case WINDOWS:
           switch (CPU.getCurrent()) {
             case X86_64:
@@ -98,6 +100,8 @@ public class AutoCpuConverter implements Converter<Str
       return Pair.of(CPU.getCurrent(), OS.FREEBSD);
     } else if (input.startsWith("openbsd")) {
       return Pair.of(CPU.getCurrent(), OS.OPENBSD);
+    } else if (input.startsWith("dragonfly")) {
+      return Pair.of(CPU.getCurrent(), OS.DRAGONFLY);
     } else if (input.startsWith("x64_windows")) {
       return Pair.of(CPU.getCurrent(), OS.WINDOWS);
     }
