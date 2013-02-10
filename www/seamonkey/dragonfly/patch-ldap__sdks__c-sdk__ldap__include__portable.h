--- ldap/sdks/c-sdk/ldap/include/portable.h.orig	2013-01-06 07:26:46.000000000 +0100
+++ ldap/sdks/c-sdk/ldap/include/portable.h	2013-01-20 17:21:43.316646000 +0100
@@ -122,7 +122,9 @@
  * some systems don't have the BSD re_comp and re_exec routines
  */
 #ifndef NEED_BSDREGEX
-#if ( defined( SYSV ) || defined( NETBSD ) || defined( FREEBSD ) || defined(__OpenBSD__) || defined( linux ) || defined( DARWIN )) && !defined(sgi)
+#if ( defined( SYSV ) || defined( NETBSD ) || defined( FREEBSD ) || \
+      defined(__OpenBSD__) || defined( linux ) || defined( DARWIN ) || \
+      defined(__DragonFly__)) && !defined(sgi)
 #define NEED_BSDREGEX
 #endif
 #endif
