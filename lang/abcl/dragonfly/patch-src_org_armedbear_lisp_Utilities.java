--- src/org/armedbear/lisp/Utilities.java.orig	2013-06-22 11:00:09.000000000 +0000
+++ src/org/armedbear/lisp/Utilities.java
@@ -57,6 +57,7 @@ public final class Utilities
         isPlatformUnix = osName.startsWith("Linux") ||
             osName.startsWith("Mac OS X") || osName.startsWith("Darwin") ||
             osName.startsWith("Solaris") ||
+            osName.startsWith("DragonFly") ||
             osName.startsWith("SunOS") || osName.startsWith("AIX") ||
             osName.startsWith("FreeBSD") || osName.startsWith("OpenBSD") ||
             osName.startsWith("NetBSD");
