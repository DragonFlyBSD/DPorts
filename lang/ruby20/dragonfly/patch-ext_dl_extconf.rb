--- ext/dl/extconf.rb.orig	2014-04-30 07:29:40 UTC
+++ ext/dl/extconf.rb
@@ -16,7 +16,6 @@ $INSTALLFILES = [
 
 check = true
 if( have_header("dlfcn.h") )
-  have_library("dl")
   check &&= have_func("dlopen")
   check &&= have_func("dlclose")
   check &&= have_func("dlsym")
