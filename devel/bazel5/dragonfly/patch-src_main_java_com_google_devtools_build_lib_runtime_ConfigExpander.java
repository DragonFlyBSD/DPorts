--- src/main/java/com/google/devtools/build/lib/runtime/ConfigExpander.java.orig	Tue Jan  1 00:00:00 1980
+++ src/main/java/com/google/devtools/build/lib/runtime/ConfigExpander.java	Mon Mar
@@ -47,6 +47,8 @@ final class ConfigExpander {
         return "freebsd";
       case OPENBSD:
         return "openbsd";
+      case DRAGONFLY:
+        return "dragonfly";
       default:
         return OS.getCurrent().getCanonicalName();
     }
