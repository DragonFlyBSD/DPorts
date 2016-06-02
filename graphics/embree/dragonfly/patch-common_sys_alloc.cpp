--- common/sys/alloc.cpp	2016-05-20 08:45:13.000000000 +0300
+++ common/sys/alloc.cpp
@@ -97,6 +97,7 @@ namespace embree
 {
   __forceinline bool isHugePageCandidate(const size_t bytes) 
   {
+#ifndef __DragonFly__
     /* try to use huge pages for large allocations */
     if (bytes >= PAGE_SIZE_2M)
     {
@@ -106,6 +107,7 @@ namespace embree
       else if (bytes >= 64 * PAGE_SIZE_2M) /* will only introduce a 3% overhead */
         return true;
     }
+#endif
     return false;
   }
 
