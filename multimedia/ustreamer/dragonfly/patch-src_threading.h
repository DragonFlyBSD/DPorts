--- src/threading.h.intermediate	2019-10-29 10:20:30.000000000 +0000
+++ src/threading.h
@@ -85,6 +85,10 @@ INLINE void thread_set_name(const char *
 #endif
 
 INLINE void thread_get_name(char *name) { // Always required for logging
+#ifdef __DragonFly__
+	snprintf(name, MAX_THREAD_NAME, "tid=000");
+	return;
+#else
 #ifdef WITH_PTHREAD_NP
 	int retval = -1;
 #	if defined(__linux__) || defined (__NetBSD__)
@@ -106,4 +110,5 @@ INLINE void thread_get_name(char *name)
 #ifdef WITH_PTHREAD_NP
 	}
 #endif
+#endif
 }
