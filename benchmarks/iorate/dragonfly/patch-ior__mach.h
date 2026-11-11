--- ior_mach.h.orig
+++ ior_mach.h
@@ -203,7 +203,7 @@
 
 
 /************************  OS is FreeBSD?  ***********************/
-#ifdef  __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <unistd.h>
 #ifdef  IOR_LARGE_FILES
 #define HUGE                    __off_t
@@ -249,7 +249,7 @@
 /*
  * process exit status
  */
-#if	defined( _AIX ) || defined( HPUX ) || defined( __CYGWIN__ ) || defined(__FreeBSD__)
+#if	defined( _AIX ) || defined( HPUX ) || defined( __CYGWIN__ ) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #else
 #include <wait.h>
