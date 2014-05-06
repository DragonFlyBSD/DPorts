--- jdk/src/solaris/classes/sun/net/PortConfig.java.orig	2014-05-06 10:13:26.120233000 +0000
+++ jdk/src/solaris/classes/sun/net/PortConfig.java
@@ -52,7 +52,7 @@ public final class PortConfig {
                     } else if (os.startsWith("SunOS")) {
                         defaultLower = 32768;
                         defaultUpper = 65535;
-                    } else if (os.contains("OS X") || os.endsWith("BSD")) {
+                    } else if (os.contains("OS X") || os.contains("DragonFly") || os.endsWith("BSD")) {
                         defaultLower = 49152;
                         defaultUpper = 65535;
                     } else {
