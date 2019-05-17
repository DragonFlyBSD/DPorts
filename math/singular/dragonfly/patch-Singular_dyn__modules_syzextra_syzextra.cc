--- Singular/dyn_modules/syzextra/syzextra.cc.orig	2018-02-14 14:55:29 UTC
+++ Singular/dyn_modules/syzextra/syzextra.cc
@@ -160,7 +160,7 @@ static FORCE_INLINE int atGetInt(idhdl r
   return ((int)(long)(atGet(rootRingHdl, attribute, INT_CMD, (void*)def)));
 }
 
-#if (defined(HAVE_QSORT_R) && (defined __APPLE__ || defined __MACH__ || defined __DARWIN__ || defined __FreeBSD__ || defined __BSD__ || defined OpenBSD3_1 || defined OpenBSD3_9))
+#if (defined(HAVE_QSORT_R) && (defined __APPLE__ || defined __MACH__ || defined __DARWIN__ || defined __FreeBSD__ || defined __BSD__ || defined OpenBSD3_1 || defined OpenBSD3_9) || defined(__DragonFly__))
 static int cmp_c_ds(void *R, const void *p1, const void *p2){
 #elif (defined(HAVE_QSORT_R) && (defined _GNU_SOURCE || defined __GNU__ || defined __linux__))
 static int cmp_c_ds(const void *p1, const void *p2, void *R){
@@ -343,7 +343,7 @@ void Sort_c_ds(const ideal id, const rin
 {
   const int sizeNew = IDELEMS(id);
 
-#if ( (defined(HAVE_QSORT_R)) && (defined __APPLE__ || defined __MACH__ || defined __DARWIN__ || defined __FreeBSD__ || defined __BSD__ || defined OpenBSD3_1 || defined OpenBSD3_9) )
+#if ( (defined(HAVE_QSORT_R)) && (defined __APPLE__ || defined __MACH__ || defined __DARWIN__ || defined __FreeBSD__ || defined __BSD__ || defined OpenBSD3_1 || defined OpenBSD3_9) || defined(__DragonFly__) )
 #define qsort_my(m, s, ss, r, cmp) qsort_r(m, s, ss, r, cmp)
 #elif ( (defined(HAVE_QSORT_R)) && (defined _GNU_SOURCE || defined __GNU__ || defined __linux__))
 #define qsort_my(m, s, ss, r, cmp) qsort_r(m, s, ss, cmp, r)
