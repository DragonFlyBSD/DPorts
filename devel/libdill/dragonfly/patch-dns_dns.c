--- dns/dns.c.orig	2019-02-28 05:43:18 UTC
+++ dns/dns.c
@@ -33,12 +33,12 @@
 #include "config.h"
 #endif
 
-#if !defined(__FreeBSD__) && !defined(__sun)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__sun)
 #ifndef _XOPEN_SOURCE
 #define _XOPEN_SOURCE	600
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly___DragonFly___)
 #define HAVE_STRUCT_SOCKADDR_SA_LEN
 #endif
 
@@ -353,7 +353,7 @@ static inline unsigned dns_atomic_fetch_
 #ifndef DNS_RANDOM
 #if defined(HAVE_ARC4RANDOM)	\
  || defined(__OpenBSD__)	\
- || defined(__FreeBSD__)	\
+ || defined(__FreeBSD__) || defined(__DragonFly__)	\
  || defined(__NetBSD__)		\
  || defined(__APPLE__)
 #define DNS_RANDOM	arc4random
