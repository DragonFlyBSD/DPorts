--- src/udp.c.orig
+++ src/udp.c
@@ -99,7 +99,7 @@
 {
   if (!uc->multicast)
     return 0;
-#if defined(PLATFORM_DARWIN)
+#if defined(PLATFORM_DARWIN) || defined(__DragonFly__)
   if (uc->ip.ss_family == AF_INET)
     return 0;
 #endif
@@ -219,6 +219,12 @@
     if (uc->multicast) {
       /* Join multicast group */
       if (multicast_src && *multicast_src) {
+#ifdef __DragonFly__
+/* XXX missing IP_ADD_SOURCE_MEMBERSHIP */
+	tvherror(subsystem, "%s - setsockopt IP_ADD_SOURCE_MEMBERSHIP failed [e=%s]",
+		 name,  strerror(errno));
+	goto error;
+#else
         /* Join with specific source address (SSM) */
         struct ip_mreq_source ms;
         memset(&ms, 0, sizeof(ms));
@@ -245,10 +251,11 @@
                    name,  strerror(errno));
           goto error;
         }
+#endif
       }
       else {
         /* Standard multicast join (non-SSM) */
-#if defined(PLATFORM_DARWIN)
+#if defined(PLATFORM_DARWIN) || defined(__DragonFly__)
         struct ip_mreq       m;
 #else
         struct ip_mreqn      m;
@@ -256,7 +263,7 @@
         memset(&m,   0, sizeof(m));
 
         m.imr_multiaddr      = IP_AS_V4(&uc->ip, addr);
-#if !defined(PLATFORM_DARWIN)
+#if !defined(PLATFORM_DARWIN) && !defined(__DragonFly__)
         m.imr_address.s_addr = 0;
         m.imr_ifindex        = ifindex;
 #else
@@ -410,7 +417,7 @@
 
   if (uc->multicast) {
     if (uc->ip.ss_family == AF_INET) {
-#if !defined(PLATFORM_DARWIN)
+#if !defined(PLATFORM_DARWIN) && !defined(__DragonFly__)
       struct ip_mreqn m;
       memset(&m, 0, sizeof(m));
       m.imr_ifindex = ifindex;
