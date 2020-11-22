--- src/tspi/ps/tspps.c.intermediate	2020-11-22 16:55:15.000000000 +0000
+++ src/tspi/ps/tspps.c
@@ -35,7 +35,7 @@
 #define LE_16 htole16
 #define LE_32 htole32
 #define LE_64 htole64
-#elif defined(HAVE_SYS_ENDIAN_H)
+#elif defined(HAVE_SYS_ENDIAN_H) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define LE_16 htole16
 #define LE_32 htole32
@@ -57,7 +57,7 @@
 
 static int user_ps_fd = -1;
 static MUTEX_DECLARE_INIT(user_ps_lock);
-#if (defined (__FreeBSD__) || defined (__OpenBSD__))
+#if (defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__))
 #include <sys/endian.h>
 #define	LE_16 htole16
 #define	LE_32 htole32
