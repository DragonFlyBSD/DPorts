--- src/util/threading.c.orig
+++ src/util/threading.c
@@ -216,7 +216,7 @@
     result         = !!thread->handle;
 #elif defined(POSIX_THREADS_IMPL)
     pthread_attr_t* aptr = NULL;
-    pthread_attr_t  attr = ZERO_INIT;
+    pthread_attr_t  attr = {0};
     if (stack_size && !pthread_attr_init(&attr) && !pthread_attr_setstacksize(&attr, stack_size)) {
         // Pass custom stack size if possible
         aptr = &attr;
@@ -534,7 +534,7 @@
     static void* attr_ptr = NULL;
 #if defined(CLOCK_GETTIME_IMPL)
     if (!attr_ptr) {
-        static pthread_condattr_t attr = ZERO_INIT;
+        static pthread_condattr_t attr = {0};
         if (!pthread_condattr_init(&attr) && !pthread_condattr_setclock(&attr, CLOCK_MONOTONIC)) {
             attr_ptr = &attr;
         }
