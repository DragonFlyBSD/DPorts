--- driver/others/memory.c.orig	2010-11-05 15:57:49.000000000 +0200
+++ driver/others/memory.c
@@ -70,7 +70,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if defined(OS_FreeBSD) || defined(OS_Darwin)
+#if defined(OS_DRAGONFLY) || defined(OS_FreeBSD) || defined(OS_Darwin)
 #include <sys/sysctl.h>
 #endif
 
@@ -152,7 +152,7 @@ int get_num_procs(void) {
 
 #endif
 
-#if defined(OS_FreeBSD) || defined(OS_Darwin)
+#if defined(OS_DRAGONFLY) || defined(OS_FreeBSD) || defined(OS_Darwin)
 
 int get_num_procs(void) {
   
@@ -182,7 +182,7 @@ int  goto_get_num_procs  (void) {
 
 int blas_get_cpu_number(void){
   char *p;
-#if defined(OS_LINUX) || defined(OS_WINDOWS) || defined(OS_FreeBSD) || defined(OS_Darwin)
+#if defined(OS_LINUX) || defined(OS_WINDOWS) || defined(OS_DRAGONFLY) || defined(OS_FreeBSD) || defined(OS_Darwin)
   int max_num;
 #endif
   int blas_goto_num   = 0;
@@ -190,7 +190,7 @@ int blas_get_cpu_number(void){
 
   if (blas_num_threads) return blas_num_threads;
 
-#if defined(OS_LINUX) || defined(OS_WINDOWS) || defined(OS_FreeBSD) || defined(OS_Darwin)
+#if defined(OS_LINUX) || defined(OS_WINDOWS) || defined(OS_DRAGONFLY) || defined(OS_FreeBSD) || defined(OS_Darwin)
   max_num = get_num_procs();
 #endif
 
@@ -210,7 +210,7 @@ int blas_get_cpu_number(void){
   else if (blas_omp_num > 0) blas_num_threads = blas_omp_num;
   else blas_num_threads = MAX_CPU_NUMBER;
 
-#if defined(OS_LINUX) || defined(OS_WINDOWS) || defined(OS_FreeBSD) || defined(OS_Darwin)
+#if defined(OS_LINUX) || defined(OS_WINDOWS) || defined(OS_DRAGONFLY) || defined(OS_FreeBSD) || defined(OS_Darwin)
   if (blas_num_threads > max_num) blas_num_threads = max_num;
 #endif
 
