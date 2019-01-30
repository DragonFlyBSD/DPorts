--- objcxx_eh.cc.orig	2019-01-30 15:03:04 UTC
+++ objcxx_eh.cc
@@ -8,6 +8,7 @@ extern "C"
 {
 #include "objc/runtime.h"
 };
+#ifndef _TYPEINFO
 namespace __cxxabiv1
 {
 	struct __class_type_info;
@@ -48,7 +49,7 @@ namespace std
 				                void **thrown_object) const;
 	};
 }
-
+#endif
 using namespace std;
 
 
