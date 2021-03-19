--- ircd/os_generic.c.orig	2019-03-17 18:20:37 UTC
+++ ircd/os_generic.c
@@ -29,7 +29,7 @@
  */
 #define _XOPEN_SOURCE   500
 #define __EXTENSIONS__  1
-#elif defined(__FreeBSD__) && __FreeBSD__ >= 5
+#elif (defined(__FreeBSD__) && __FreeBSD__ >= 5) || defined(__DragonFly__)
 /* FreeBSD 6.0 requires SUSv3 to support IPv6 -- but if you ask for
  * that specifically (by defining _XOPEN_SOURCE to anything at all),
  * they cleverly hide IPPROTO_IPV6.  If you don't ask for anything,
