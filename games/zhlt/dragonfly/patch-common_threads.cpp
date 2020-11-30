--- common/threads.cpp.intermediate	2020-11-29 10:27:42.000000000 +0000
+++ common/threads.cpp
@@ -25,6 +25,7 @@
 #ifdef HAVE_PTHREAD_H
 #include <pthread.h>
 #endif
+#include <stdint.h>
 #endif
 
 #include "hlassert.h"
@@ -574,7 +575,7 @@ void            RunThreadsOn(int workcnt
 
     for (i = 0; i < g_numthreads; i++)
     {
-        if (pthread_create(&work_threads[i], &attrib, ThreadEntryStub, (void*)i) == -1)
+        if (pthread_create(&work_threads[i], &attrib, ThreadEntryStub, (void*)(uintptr_t)i) == -1)
         {
             Error("pthread_create failed");
         }
