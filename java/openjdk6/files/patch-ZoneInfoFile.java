$FreeBSD: head/java/openjdk6/files/patch-ZoneInfoFile.java 340725 2014-01-22 17:40:44Z mat $

--- jdk/src/share/classes/sun/util/calendar/ZoneInfoFile.java.orig	2012-05-01 18:59:17.000000000 -0700
+++ jdk/src/share/classes/sun/util/calendar/ZoneInfoFile.java	2012-05-01 19:02:16.000000000 -0700
@@ -476,7 +476,8 @@
     static {
         String zi = (String) AccessController.doPrivileged(
                          new sun.security.action.GetPropertyAction("java.home"))
-                    + File.separator + "lib" + File.separator + "zi";
+                    + File.separator + "lib" + File.separator + "."
+                    + File.separator + "zi";
         try {
             zi = new File(zi).getCanonicalPath();
         } catch (Exception e) {
