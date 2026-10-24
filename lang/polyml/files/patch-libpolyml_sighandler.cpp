--- libpolyml/sighandler.cpp.orig	2026-07-07 19:06:37 UTC
+++ libpolyml/sighandler.cpp
@@ -549,8 +549,8 @@ void SigHandler::Init(void)
 #ifdef PTHREAD_STACK_MIN
     // In glibc 2.34 and later, PTHREAD_STACK_MIN may expand to a function call
     size_t stacksize = PTHREAD_STACK_MIN; // Only small stack.
-    if (stacksize < 4096U) // But not too small: FreeBSD makes it 2k
-        stacksize = 4096U;
+    if (stacksize < 65536U) // But not too small: FreeBSD makes it 2k
+        stacksize = 65536U;
     pthread_attr_setstacksize(&attrs, stacksize);
 #endif
     threadRunning = pthread_create(&detectionThreadId, &attrs, SignalDetectionThread, 0) == 0;
