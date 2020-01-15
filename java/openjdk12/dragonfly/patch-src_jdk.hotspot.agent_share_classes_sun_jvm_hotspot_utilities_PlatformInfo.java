--- src/jdk.hotspot.agent/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java.orig	2019-10-16 18:31:09 UTC
+++ src/jdk.hotspot.agent/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java
@@ -37,6 +37,8 @@ public class PlatformInfo {
       return "solaris";
     } else if (os.equals("Linux")) {
       return "linux";
+    } else if (os.equals("DragonFly") || os.equals("DragonFlyBSD") ) {
+      return "bsd";
     } else if (os.equals("FreeBSD")) {
       return "bsd";
     } else if (os.equals("NetBSD")) {
