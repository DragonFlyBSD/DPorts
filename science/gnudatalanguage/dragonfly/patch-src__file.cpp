--- src/file.cpp.bak	2015-12-14 11:29:30.000000000 +0200
+++ src/file.cpp
@@ -799,7 +799,7 @@ DString makeInsensitive(const DString &s
     if( noSort)
       flags |= GLOB_NOSORT;
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
     if( !quote) // n/a on OS X
       flags |= GLOB_NOESCAPE;
 
