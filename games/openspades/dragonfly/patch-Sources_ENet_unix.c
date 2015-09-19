--- Sources/ENet/unix.c.orig	2014-06-23 14:55:03.000000000 +0300
+++ Sources/ENet/unix.c
@@ -80,7 +80,7 @@ enet_address_set_host (ENetAddress * add
     char buffer [2048];
     int errnum;
 
-#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
     gethostbyname_r (name, & hostData, buffer, sizeof (buffer), & hostEntry, & errnum);
 #else
     hostEntry = gethostbyname_r (name, & hostData, buffer, sizeof (buffer), & errnum);
@@ -133,7 +133,7 @@ enet_address_get_host (const ENetAddress
 
     in.s_addr = address -> host;
 
-#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
     gethostbyaddr_r ((char *) & in, sizeof (struct in_addr), AF_INET, & hostData, buffer, sizeof (buffer), & hostEntry, & errnum);
 #else
     hostEntry = gethostbyaddr_r ((char *) & in, sizeof (struct in_addr), AF_INET, & hostData, buffer, sizeof (buffer), & errnum);
