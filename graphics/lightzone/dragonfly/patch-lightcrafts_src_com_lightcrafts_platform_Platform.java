--- ../lightcrafts/src/com/lightcrafts/platform/Platform.java.orig	2018-01-22 13:20:04.000000000 +0000
+++ ../lightcrafts/src/com/lightcrafts/platform/Platform.java
@@ -58,6 +58,7 @@ public class Platform {
         static Type getTypeForOS() {
             final String osName = System.getProperty( "os.name" ).toLowerCase();
             if ( osName.startsWith( "linux" )
+                    || osName.startsWith( "dragonfly" )
                     || osName.startsWith( "freebsd" )
                     || osName.startsWith( "openbsd" )
                     || osName.startsWith( "sunos" ) )
