--- bindings/java/hyperic_jni/src/org/hyperic/jni/ArchName.java.orig	2014-11-17 21:46:20 UTC
+++ bindings/java/hyperic_jni/src/org/hyperic/jni/ArchName.java
@@ -94,6 +94,9 @@ public class ArchName {
             //none of the 4,5,6 major versions are binary compatible
             return arch + "-freebsd-" + majorVersion;
         }
+	else if (name.equals("DragonFly")) {
+	    return arch + "-dragonfly-" + majorVersion;
+	}
         else if (name.equals("OpenBSD")) {
             return arch + "-openbsd-" + majorVersion;
         }
