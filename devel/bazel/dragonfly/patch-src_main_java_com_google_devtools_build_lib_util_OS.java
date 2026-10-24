--- src/main/java/com/google/devtools/build/lib/util/OS.java.orig	1979-12-31 23:00:00 UTC
+++ src/main/java/com/google/devtools/build/lib/util/OS.java
@@ -23,9 +23,10 @@ public enum OS {
   FREEBSD("freebsd", "FreeBSD"),
   LINUX("linux", "Linux"),
   WINDOWS("windows", "Windows"),
+  DRAGONFLY("dragonfly", "DragonFly"),
   UNKNOWN("unknown", "");
 
-  private static final EnumSet<OS> POSIX_COMPATIBLE = EnumSet.of(DARWIN, FREEBSD, LINUX);
+  private static final EnumSet<OS> POSIX_COMPATIBLE = EnumSet.of(DARWIN, FREEBSD, LINUX, DRAGONFLY);
 
   private final String canonicalName;
   private final String detectionName;
