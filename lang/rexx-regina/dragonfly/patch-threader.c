--- threader.c.orig	2012-09-26 00:59:08 UTC
+++ threader.c
@@ -31,6 +31,7 @@
 
 #ifdef POSIX_THREADS
 # include <sys/time.h>
+# include <stdint.h>
 # include <unistd.h>
 # include <pthread.h>
 # define USE_SEMAPHORES 0
@@ -357,7 +358,7 @@ THREAD_RETURN THREAD_CONVENTION instore(
    /*
     * signal that we are alive.
     */
-   threadx[(unsigned) data] = my_threadidx();
+   threadx[(uintmax_t) data] = my_threadidx();
 
    /*
     * Register an exit handler which shall check Regina's output of the thread.
@@ -455,7 +456,7 @@ THREAD_RETURN THREAD_CONVENTION instore(
    /*
     * Finally inform the invoker that we have stopped gracefully.
     */
-   ThreadHasStopped( ( unsigned ) data );
+   ThreadHasStopped( ( uintmax_t ) data );
 #ifdef REGINAVERSION
    ReginaCleanup();
 #endif
@@ -478,7 +479,7 @@ THREAD_RETURN THREAD_CONVENTION external
    /*
     * signal that we are alive.
     */
-   threadx[(unsigned) data] = my_threadidx();
+   threadx[(uintmax_t) data] = my_threadidx();
 
    rc = RexxStart( 0,            /* ArgCount                  */
                    NULL,         /* ArgList                   */
@@ -493,7 +494,7 @@ THREAD_RETURN THREAD_CONVENTION external
    /*
     * Finally inform the invoker that we have stopped gracefully.
     */
-   ThreadHasStopped( ( unsigned ) data );
+   ThreadHasStopped( ( uintmax_t ) data );
 #ifdef REGINAVERSION
    ReginaCleanup();
 #endif
@@ -930,7 +931,7 @@ int start_a_thread( unsigned position )
    int rc;
 
    State[position] = Running;
-   rc = pthread_create( &thread[position], NULL, (program_name) ? external : instore, (void *) position );
+   rc = pthread_create( &thread[position], NULL, (program_name) ? external : instore, (void *)(uintptr_t) position );
    if ( rc )
    {
       fprintf( stderr, "\n"
