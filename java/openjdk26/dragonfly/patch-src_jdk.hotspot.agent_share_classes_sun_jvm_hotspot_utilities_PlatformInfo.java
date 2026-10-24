--- src/jdk.hotspot.agent/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java.orig
+++ src/jdk.hotspot.agent/share/classes/sun/jvm/hotspot/utilities/PlatformInfo.java
@@ -33,6 +33,8 @@
     String os = System.getProperty("os.name");
     if (os.equals("Linux")) {
       return "linux";
+    } else if (os.equals("DragonFly") || os.equals("DragonFlyBSD") ) {
+      return "bsd";
     } else if (os.equals("FreeBSD")) {
       return "bsd";
     } else if (os.equals("NetBSD")) {
