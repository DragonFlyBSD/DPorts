--- jdk/src/share/classes/sun/print/PSPrinterJob.java.intermediate	2014-05-27 20:12:22.350235000 +0000
+++ jdk/src/share/classes/sun/print/PSPrinterJob.java
@@ -1568,9 +1568,9 @@ public class PSPrinterJob extends Raster
         }
 
        String osname = System.getProperty("os.name");
-       if (osname.equals("Linux") || osname.endsWith("BSD") || osname.contains("OS X")) {
+       if (osname.equals("Linux") || osname.endsWith("BSD") || osname.equals("DragonFly") || osname.contains("OS X")) {
             String lprPath = "/usr/bin/lpr";
-            if (osname.endsWith("BSD")) {
+            if (osname.endsWith("BSD") || osname.equals("DragonFly")) {
                 final PrintService pservice = getPrintService();
                 Boolean isIPPPrinter =
                     (Boolean)java.security.AccessController.doPrivileged(
