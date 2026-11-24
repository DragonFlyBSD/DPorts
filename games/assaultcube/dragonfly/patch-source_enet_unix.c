--- source/enet/unix.c.orig
+++ source/enet/unix.c
@@ -97,7 +97,7 @@
     char buffer [2048];
     int errnum;
 
-#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     gethostbyname_r (name, & hostData, buffer, sizeof (buffer), & hostEntry, & errnum);
 #else
     hostEntry = gethostbyname_r (name, & hostData, buffer, sizeof (buffer), & errnum);
@@ -153,7 +153,7 @@
 
     in.s_addr = address -> host;
 
-#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(linux) || defined(__linux) || defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     gethostbyaddr_r ((char *) & in, sizeof (struct in_addr), AF_INET, & hostData, buffer, sizeof (buffer), & hostEntry, & errnum);
 #else
     hostEntry = gethostbyaddr_r ((char *) & in, sizeof (struct in_addr), AF_INET, & hostData, buffer, sizeof (buffer), & errnum);
