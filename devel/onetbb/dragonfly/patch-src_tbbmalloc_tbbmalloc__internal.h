--- src/tbbmalloc/tbbmalloc_internal.h.orig	2021-10-04 09:50:18 UTC
+++ src/tbbmalloc/tbbmalloc_internal.h
@@ -654,7 +654,7 @@ class RecursiveMallocCallProtector {
    so there is a guarantee that on 2nd usage pthread is initialized.
    No such situation observed with other supported OSes.
  */
-#if __FreeBSD__
+#if __FreeBSD__ || __DragonFly__
     static bool        canUsePthread;
 #else
     static const bool  canUsePthread = true;
@@ -708,7 +708,7 @@ public:
    scalable_malloc (nested call must set mallocRecursionDetected). */
     static void detectNaiveOverload() {
         if (!malloc_proxy) {
-#if __FreeBSD__
+#if __FreeBSD__ || __DragonFly__
 /* If !canUsePthread, we can't call pthread_self() before, but now pthread
    is already on, so can do it. */
             if (!canUsePthread) {
