--- build/cmake/FindResSearch.cmake.orig	2023-01-03 15:52:22 UTC
+++ build/cmake/FindResSearch.cmake
@@ -14,7 +14,8 @@ if (ENABLE_SRV STREQUAL ON OR ENABLE_SRV
       # Could be a macro, not a function, so use check_symbol_exists.
       check_symbol_exists (res_nsearch resolv.h MONGOC_HAVE_RES_NSEARCH)
       if (MONGOC_HAVE_RES_NSEARCH)
-         set (RESOLV_LIBRARIES resolv)
+      	 # resolv is in libc
+         #set (RESOLV_LIBRARIES resolv)
          set (MONGOC_HAVE_RES_SEARCH 0)
 
          # We have res_nsearch. Call res_ndestroy (BSD/Mac) or res_nclose (Linux)?
