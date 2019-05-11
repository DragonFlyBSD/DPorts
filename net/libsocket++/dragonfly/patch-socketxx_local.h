--- socket++/local.h.orig	2011-12-27 11:23:48 UTC
+++ socket++/local.h
@@ -89,9 +89,9 @@ extern "C" unsigned long inet_addr (cons
 // arpa/in.h does not provide a protype for the following
 extern "C" char* inet_ntoa (in_addr ina);
 
-#if !(defined (__linux__) || defined(__FreeBSD__))
+#if !(defined (__linux__) || defined(__FreeBSD__) || defined(__DragonFly__))
   extern "C" int gethostname (char* hostname, int len);
-#if !(defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__APPLE__))
+#if !(defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__APPLE__))
   extern char* SYS_SIGLIST [];
 #endif
 #endif
