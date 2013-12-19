--- jdk/src/solaris/classes/sun/nio/fs/DefaultFileSystemProvider.java.intermediate	2013-12-19 19:02:24.715811000 +0000
+++ jdk/src/solaris/classes/sun/nio/fs/DefaultFileSystemProvider.java
@@ -84,6 +84,8 @@ public class DefaultFileSystemProvider {
             return createProvider("sun.nio.fs.LinuxFileSystemProvider");
         if (osname.equals("Darwin") || osname.contains("OS X"))
             return createProvider("sun.nio.fs.MacOSXFileSystemProvider");
+        if (osname.equals("DragonFly"))
+            return createProvider("sun.nio.fs.BsdFileSystemProvider");
         if (osname.endsWith("BSD"))
             return createProvider("sun.nio.fs.BsdFileSystemProvider");
         throw new AssertionError("Platform not recognized");
