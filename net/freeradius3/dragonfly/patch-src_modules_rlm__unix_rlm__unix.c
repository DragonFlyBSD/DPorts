--- src/modules/rlm_unix/rlm_unix.c.orig	2019-11-14 17:08:23 UTC
+++ src/modules/rlm_unix/rlm_unix.c
@@ -295,7 +295,7 @@ static rlm_rcode_t CC_HINT(nonnull) mod_
 	}
 #endif
 
-#if defined(__FreeBSD__) || defined(bsdi) || defined(_PWF_EXPIRE)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(bsdi) || defined(_PWF_EXPIRE)
 	/*
 	 *	Check if password has expired.
 	 */
