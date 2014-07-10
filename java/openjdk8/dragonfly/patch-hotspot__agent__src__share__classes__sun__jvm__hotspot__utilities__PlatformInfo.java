--- hotspot/agent/src/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java.orig	2014-03-04 02:52:05.000000000 +0000
+++ hotspot/agent/src/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java	2014-07-08 04:19:05.603560000 +0000
@@ -43,6 +43,8 @@ public class PlatformInfo {
       return "bsd";
     } else if (os.equals("OpenBSD")) {
       return "bsd";
+    } else if (os.equals("DragonFlyBSD")) {
+      return "bsd";
     } else if (os.contains("Darwin") || os.contains("OS X")) {
       return "darwin";
     } else if (os.startsWith("Windows")) {
