--- kernel/combinatorics/hilb.cc.orig
+++ kernel/combinatorics/hilb.cc
@@ -1805,7 +1805,7 @@
 }
 
 #ifdef HAVE_QSORT_R
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__CYGWIN__)
+#if defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__CYGWIN__)
 static int compare_rp(void *arg,const void *pp1, const void *pp2)
 #else
 static int compare_rp(const void *pp1, const void *pp2, void* arg)
@@ -2042,7 +2042,7 @@
    /* sort */
   if (IDELEMS(AA)>1)
   #ifdef HAVE_QSORT_R
-    #if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__CYGWIN__)
+    #if defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__CYGWIN__)
       qsort_r(AA->m,IDELEMS(AA),sizeof(poly),src,compare_rp);
     #else
       qsort_r(AA->m,IDELEMS(AA),sizeof(poly),compare_rp,src);
