--- src/common/isc_sync.cpp.orig	2024-08-08 09:26:44 UTC
+++ src/common/isc_sync.cpp
@@ -681,11 +681,25 @@ int SharedMemoryBase::eventInit(event_t* event)
 	PTHREAD_ERROR(pthread_mutexattr_init(&mattr));
 	PTHREAD_ERROR(pthread_condattr_init(&cattr));
 #ifdef PTHREAD_PROCESS_SHARED
+#if defined(__DragonFly__)
+	// DragonFly's pthread implementation may reject PTHREAD_PROCESS_SHARED
+	// for mutexes/conditions in some execution environments (e.g. a build
+	// chroot); fall back to process-private primitives instead of aborting
+	// database creation with "operating system directive ... failed".
 	if (!isSandboxed())
 	{
+		if (pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_SHARED))
+			pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_PRIVATE);
+		if (pthread_condattr_setpshared(&cattr, PTHREAD_PROCESS_SHARED))
+			pthread_condattr_setpshared(&cattr, PTHREAD_PROCESS_PRIVATE);
+	}
+#else
+	if (!isSandboxed())
+	{
 		PTHREAD_ERROR(pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_SHARED));
 		PTHREAD_ERROR(pthread_condattr_setpshared(&cattr, PTHREAD_PROCESS_SHARED));
 	}
+#endif
 #else
 #error Your system must support PTHREAD_PROCESS_SHARED to use firebird.
 #endif
@@ -1431,8 +1445,18 @@ SharedMemoryBase::SharedMemoryBase(const TEXT* filenam
 
 				PTHREAD_ERR_RAISE(pthread_mutexattr_init(&mattr));
 #ifdef PTHREAD_PROCESS_SHARED
+#if defined(__DragonFly__)
+				// See note in eventInit() above: fall back to
+				// process-private instead of aborting.
 				if (!isSandboxed())
+				{
+					if (pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_SHARED))
+						pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_PRIVATE);
+				}
+#else
+				if (!isSandboxed())
 					PTHREAD_ERR_RAISE(pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_SHARED));
+#endif
 #else
 #error Your system must support PTHREAD_PROCESS_SHARED to use pthread shared futex in Firebird.
 #endif
