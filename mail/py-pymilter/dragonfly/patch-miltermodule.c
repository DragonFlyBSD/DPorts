--- miltermodule.c.orig	2026-10-23 00:00:00 UTC
+++ miltermodule.c
@@ -72,7 +72,7 @@
  * published.  Unfortunately I know of no good way to do this
  * other than with OS-specific tests.
  */
-#if defined(__FreeBSD__) || defined(__linux__) || defined(__sun__) || defined(__GLIBC__) || (defined(__APPLE__) && defined(__MACH__))
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__linux__) || defined(__sun__) || defined(__GLIBC__) || (defined(__APPLE__) && defined(__MACH__))
 #define HAVE_IPV6_RFC2553
 #include <arpa/inet.h>
 #endif
