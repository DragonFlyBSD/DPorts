--- hotspot/agent/src/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java.orig	2012-08-10 18:22:49.000000000 +0200
+++ hotspot/agent/src/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java	2013-01-03 08:45:31.437171000 +0100
@@ -45,6 +45,8 @@
       return "bsd";
     } else if (os.equals("Darwin") || os.contains("OS X")) {
       return "bsd";
+    } else if (os.equals("DragonFlyBSD")) {
+      return "bsd";
     } else if (os.startsWith("Windows")) {
       return "win32";
     } else {
