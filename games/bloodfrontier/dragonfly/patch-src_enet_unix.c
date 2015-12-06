--- src/enet/unix.c.orig	2009-11-13 05:17:15.000000000 +0200
+++ src/enet/unix.c
@@ -80,7 +80,7 @@ enet_address_set_host (ENetAddress * add
     char buffer [2048];
     int errnum;
 
-#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__)
+#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__)
     gethostbyname_r (name, & hostData, buffer, sizeof (buffer), & hostEntry, & errnum);
 #else
     hostEntry = gethostbyname_r (name, & hostData, buffer, sizeof (buffer), & errnum);
@@ -133,7 +133,7 @@ enet_address_get_host (const ENetAddress
 
     in.s_addr = address -> host;
 
-#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__)
+#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__)
     gethostbyaddr_r ((char *) & in, sizeof (struct in_addr), AF_INET, & hostData, buffer, sizeof (buffer), & hostEntry, & errnum);
 #else
     hostEntry = gethostbyaddr_r ((char *) & in, sizeof (struct in_addr), AF_INET, & hostData, buffer, sizeof (buffer), & errnum);
