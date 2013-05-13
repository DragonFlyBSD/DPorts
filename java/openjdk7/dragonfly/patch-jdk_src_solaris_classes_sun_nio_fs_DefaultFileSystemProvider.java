--- jdk/src/solaris/classes/sun/nio/fs/DefaultFileSystemProvider.java.intermediate	2013-05-13 10:51:23.878100000 +0000
+++ jdk/src/solaris/classes/sun/nio/fs/DefaultFileSystemProvider.java
@@ -82,6 +82,8 @@ public class DefaultFileSystemProvider {
             return createProvider("sun.nio.fs.SolarisFileSystemProvider");
         if (osname.equals("Linux"))
             return createProvider("sun.nio.fs.LinuxFileSystemProvider");
+        if (osname.equals("DragonFly"))
+            return createProvider("sun.nio.fs.BsdFileSystemProvider");
         if (osname.endsWith("BSD") || osname.equals("Darwin") || osname.contains("OS X"))
             return createProvider("sun.nio.fs.BsdFileSystemProvider");
         throw new AssertionError("Platform not recognized");
