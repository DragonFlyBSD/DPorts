--- jdk/src/solaris/classes/sun/nio/fs/DefaultFileSystemProvider.java.orig	2012-08-10 19:31:24.000000000 +0200
+++ jdk/src/solaris/classes/sun/nio/fs/DefaultFileSystemProvider.java	2012-12-28 10:27:51.716267000 +0100
@@ -68,7 +68,8 @@
             return createProvider("sun.nio.fs.SolarisFileSystemProvider");
         if (osname.equals("Linux"))
             return createProvider("sun.nio.fs.LinuxFileSystemProvider");
-        if (osname.equals("Darwin") || osname.contains("OS X"))
+        if (osname.endsWith("BSD") || osname.equals("Darwin") || osname.contains("OS X") ||
+	    osname.equals("DragonFly"))
             return createProvider("sun.nio.fs.BsdFileSystemProvider");
         throw new AssertionError("Platform not recognized");
     }
