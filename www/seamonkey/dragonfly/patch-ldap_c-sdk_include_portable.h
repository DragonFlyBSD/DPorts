--- ldap/c-sdk/include/portable.h.orig	2015-11-04 01:43:24 UTC
+++ ldap/c-sdk/include/portable.h
@@ -122,7 +122,10 @@
  * some systems don't have the BSD re_comp and re_exec routines
  */
 #ifndef NEED_BSDREGEX
-#if ( defined( SYSV ) || defined( NETBSD ) || defined( FREEBSD ) || defined(__OpenBSD__) || defined( linux ) || defined( DARWIN )) && !defined(sgi)
+#if ( defined( SYSV ) || defined( NETBSD ) || defined( FREEBSD ) \
+ || defined(__DragonFly__) \
+ || defined(__OpenBSD__) || defined( linux ) || defined( DARWIN )) \
+ && !defined(sgi)
 #define NEED_BSDREGEX
 #endif
 #endif
