--- kernel/combinatorics/hilb.cc.orig	2022-11-16 17:02:42.496516000 +0100
+++ kernel/combinatorics/hilb.cc	2022-11-16 17:03:34.995356000 +0100
@@ -1716,7 +1716,7 @@
   #endif
 }
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(_BSD_SOURCE)
+#if defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(_BSD_SOURCE)
 static int compare_rp(void *arg,const void *pp1, const void *pp2)
 #else
 static int compare_rp(const void *pp1, const void *pp2, void* arg)
@@ -1869,7 +1869,7 @@
   idSkipZeroes(AA);
    /* sort */
   if (IDELEMS(AA)>1)
-  #if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(_BSD_SOURCE)
+  #if defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(_BSD_SOURCE)
     qsort_r(AA->m,IDELEMS(AA),sizeof(poly),src,compare_rp);
   #else
     qsort_r(AA->m,IDELEMS(AA),sizeof(poly),compare_rp,src);
