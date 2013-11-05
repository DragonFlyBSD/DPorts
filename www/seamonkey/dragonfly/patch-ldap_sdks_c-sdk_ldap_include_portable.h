--- ldap/sdks/c-sdk/ldap/include/portable.h.orig	2013-10-23 22:09:34.000000000 +0000
+++ ldap/sdks/c-sdk/ldap/include/portable.h
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
