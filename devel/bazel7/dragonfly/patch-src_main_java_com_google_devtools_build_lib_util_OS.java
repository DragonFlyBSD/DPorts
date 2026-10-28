--- src/main/java/com/google/devtools/build/lib/util/OS.java.orig
+++ src/main/java/com/google/devtools/build/lib/util/OS.java
@@ -74,6 +74,12 @@
       return OS.UNKNOWN;
     }
 
+    // DragonFly reports os.name "DragonFlyBSD"; run it as FreeBSD rather
+    // than UNKNOWN, which CommandBuilder refuses.
+    if (osName.startsWith("DragonFly")) {
+      return OS.FREEBSD;
+    }
+
     for (OS os : OS.values()) {
       // Windows have many names, all starting with "Windows".
       if (osName.startsWith(os.detectionName)) {
