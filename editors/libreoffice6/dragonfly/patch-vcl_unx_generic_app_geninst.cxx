--- vcl/unx/generic/app/geninst.cxx.intermediate	2017-07-04 13:39:10.000000000 +0000
+++ vcl/unx/generic/app/geninst.cxx	2017-07-04 13:43:01.000000000 +0000
@@ -137,9 +137,10 @@
 OUString SalGenericInstance::getOSVersion()
 {
     struct utsname stName;
+    OUString no_uname = "unknown";
 
     if ( uname( &stName ) != 0 )
-        return "unknown";
+        return no_uname;
 
     sal_Int32 nDots = 0;
     sal_Int32 nIndex = 0;
