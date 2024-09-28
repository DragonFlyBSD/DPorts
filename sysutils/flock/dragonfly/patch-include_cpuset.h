--- include/cpuset.h.orig	2021-05-03 14:17:47 UTC
+++ include/cpuset.h
@@ -17,7 +17,7 @@
  * License as published by the Free Software Foundation; either
  * version 2.1 of the License, or (at your option) any later version.
  */
-#if !HAVE_DECL_CPU_ALLOC
+#if !HAVE_DECL_CPU_ALLOC && !defined(__DragonFly__)
 
 # define CPU_ZERO_S(setsize, cpusetp) \
   do {									      \
