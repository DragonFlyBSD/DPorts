--- jdk/src/share/classes/sun/security/jgss/wrapper/SunNativeProvider.java.intermediate	2014-05-27 20:12:22.080250000 +0000
+++ jdk/src/share/classes/sun/security/jgss/wrapper/SunNativeProvider.java
@@ -84,6 +84,7 @@ public final class SunNativeProvider ext
                             if (osname.startsWith("SunOS")) {
                                 gssLibs = new String[]{ "libgss.so" };
                             } else if (osname.startsWith("Linux") ||
+                                       osname.equals("DragonFly") ||
                                        osname.endsWith("BSD")) {
                                 gssLibs = new String[]{
                                     "libgssapi.so",
