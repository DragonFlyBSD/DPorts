--- src/common/isc_sync.cpp.orig	2024-08-08 08:59:40 UTC
+++ src/common/isc_sync.cpp
@@ -610,11 +610,19 @@ int SharedMemoryBase::eventInit(event_t* event)
 	PTHREAD_ERROR(pthread_mutexattr_init(&mattr));
 	PTHREAD_ERROR(pthread_condattr_init(&cattr));
 #ifdef PTHREAD_PROCESS_SHARED
+#if defined(__DragonFly__)
+	// DragonFly defines PTHREAD_PROCESS_SHARED but its pthread
+	// implementation rejects it with EINVAL at runtime. Fall back to
+	// process-private event blocks like a sandboxed process does.
+	(void) mattr;
+	(void) cattr;
+#else
 	if (!isSandboxed())
 	{
 		PTHREAD_ERROR(pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_SHARED));
 		PTHREAD_ERROR(pthread_condattr_setpshared(&cattr, PTHREAD_PROCESS_SHARED));
 	}
+#endif
 #else
 #error Your system must support PTHREAD_PROCESS_SHARED to use firebird.
 #endif
@@ -1387,8 +1395,13 @@ SharedMemoryBase::SharedMemoryBase(const TEXT* filenam
 
 				PTHREAD_ERR_RAISE(pthread_mutexattr_init(&mattr));
 #ifdef PTHREAD_PROCESS_SHARED
+#if defined(__DragonFly__)
+				// See eventInit above: PTHREAD_PROCESS_SHARED is
+				// rejected with EINVAL on DragonFly at runtime.
+#else
 				if (!isSandboxed())
 					PTHREAD_ERR_RAISE(pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_SHARED));
+#endif
 #else
 #error Your system must support PTHREAD_PROCESS_SHARED to use pthread shared futex in Firebird.
 #endif
