--- src/tools/make/configure.c.orig	2019-11-19 19:45:23 UTC
+++ src/tools/make/configure.c
@@ -111,6 +111,7 @@ void determineOS() {
 
     if      (strncasecmp(sys.sysname, "cygwin",  6) == 0) {os = "cygwin";  binext = ".exe";}
     else if (strncasecmp(sys.sysname, "linux",   5) == 0) {determineLinuxVariant();}
+    else if (strncasecmp(sys.sysname, "dragonfly", 9) == 0) {os = "dragonfly"; bsd = 1;}
     else if (strncasecmp(sys.sysname, "freebsd", 5) == 0) {os = "freebsd"; bsd = 1;}
     else if (strncasecmp(sys.sysname, "openbsd", 5) == 0) {os = "openbsd"; bsd = 1;}
     else if (strncasecmp(sys.sysname, "darwin",  5) == 0) {os = "darwin";  staticlink = ""; dynext = ".dylib";}
