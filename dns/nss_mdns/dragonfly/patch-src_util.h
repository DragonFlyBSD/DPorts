--- src/util.h.orig	2020-06-26 00:04:20 UTC
+++ src/util.h
@@ -25,7 +25,7 @@
 #include <netdb.h>
 #include <nss.h>
 #include <stdio.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #include <resolv.h>
@@ -108,7 +108,7 @@ enum nss_status convert_userdata_for_name_to_hostent(c
 
 // Converts from the userdata struct into the gaih_addrtuple format, used by
 // gethostbyaddr4_r.
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status convert_userdata_to_addrtuple(const userdata_t* u,
                                               const char* name,
                                               struct gaih_addrtuple** pat,
