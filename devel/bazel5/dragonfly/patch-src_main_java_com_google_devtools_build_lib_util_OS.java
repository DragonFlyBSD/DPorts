--- src/main/java/com/google/devtools/build/lib/util/OS.java.orig	Tue Jan  1 00:00:00 1980
+++ src/main/java/com/google/devtools/build/lib/util/OS.java	Mon Mar
@@ -22,11 +22,12 @@ public enum OS {
   DARWIN("osx", "Mac OS X"),
   FREEBSD("freebsd", "FreeBSD"),
   OPENBSD("openbsd", "OpenBSD"),
+  DRAGONFLY("dragonfly", "DragonFly"),
   LINUX("linux", "Linux"),
   WINDOWS("windows", "Windows"),
   UNKNOWN("unknown", "");
 
-  private static final EnumSet<OS> POSIX_COMPATIBLE = EnumSet.of(DARWIN, FREEBSD, OPENBSD, LINUX);
+  private static final EnumSet<OS> POSIX_COMPATIBLE = EnumSet.of(DARWIN, FREEBSD, OPENBSD, DRAGONFLY, LINUX);
 
   private final String canonicalName;
   private final String detectionName;
