--- jitterentropy-base-user.h.orig
+++ jitterentropy-base-user.h
@@ -77,7 +77,7 @@
 #include <openssl/crypto.h>
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <sys/mman.h>
 #endif
 
@@ -330,7 +330,7 @@
 		tmp = NULL;
 	}
 
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 	tmp = malloc(len);
 	if (!tmp)
 		return NULL;
@@ -386,7 +386,7 @@
 	OPENSSL_cleanse(ptr, len);
 	OPENSSL_secure_free(ptr);
 
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 	/* while memory returned to the OS is automatically unlocked,
 	 * it is not known how long libc keeps this memory cached
 	 * internally therefore its more robust to nevertheless
