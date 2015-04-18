--- include/openbabel/shared_ptr.h.orig	2015-04-18 12:11:41 UTC
+++ include/openbabel/shared_ptr.h
@@ -18,10 +18,10 @@ GNU General Public License for more deta
 
 #ifdef USE_BOOST
   #include <boost/shared_ptr.hpp>
-  #define shared_ptr boost::shared_ptr
+  #define obsharedptr boost::shared_ptr
 #else
   #include <memory>
-  #if __GNUC__ == 4  //&& __GNUC_MINOR__ < 3  removed at the suggestion of Konstantin Tokarev
+  #if __GNUC__ >= 4  //&& __GNUC_MINOR__ < 3  removed at the suggestion of Konstantin Tokarev
     #ifdef _LIBCPP_VERSION
       #include <memory>
     #else
@@ -29,9 +29,9 @@ GNU General Public License for more deta
     #endif
   #endif
   #ifdef _LIBCPP_VERSION
-    using std::shared_ptr;
+    #define obsharedptr std::shared_ptr
   #else
-    using std::tr1::shared_ptr;
+    #define obsharedptr std::tr1::shared_ptr
   #endif
 #endif
 
