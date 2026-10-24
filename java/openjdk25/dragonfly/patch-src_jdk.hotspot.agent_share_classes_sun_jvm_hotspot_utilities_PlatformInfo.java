--- src/jdk.hotspot.agent/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java.orig	2021-09-14 03:59:48 UTC
+++ src/jdk.hotspot.agent/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java
@@ -33,6 +33,8 @@ public class PlatformInfo {
     String os = System.getProperty("os.name");
     if (os.equals("Linux")) {
       return "linux";
+    } else if (os.equals("DragonFly") || os.equals("DragonFlyBSD") ) {
+      return "bsd";
     } else if (os.equals("FreeBSD")) {
       return "bsd";
     } else if (os.equals("NetBSD")) {
