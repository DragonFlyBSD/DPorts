--- nasl/nasl_frame_forgery.c.orig
+++ nasl/nasl_frame_forgery.c
@@ -42,7 +42,7 @@
  */
 #define G_LOG_DOMAIN "lib  nasl"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ETH_ALEN ETHER_ADDR_LEN
 #define ETH_P_ARP ETHERTYPE_ARP
 #define ETH_P_ALL 0x0003
@@ -61,7 +61,7 @@
 
 struct pseudo_frame
 {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct ether_header framehdr;
 #else
   struct ethhdr framehdr;
@@ -98,7 +98,7 @@
  * @param[in] ether_dst_addr The dst MAC address.
  */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 static void
 prepare_sockaddr_ll (struct sockaddr_dl *addr, int ifindex,
                      const u_char *ether_dst_addr)
@@ -132,7 +132,7 @@
  * @param[in] payload The payload, a datalink layer frame with payload
  * @param[in] payload_sz The payload size.
  */
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static void
 prepare_message (u_char *msg, struct sockaddr_ll *soc_addr_ll, u_char *payload,
                  int payload_sz)
@@ -207,7 +207,7 @@
   int answer_sz = -1;
 
   // Create the raw socket
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   soc = socket (AF_INET, SOCK_RAW, htons (ETH_P_ALL));
 #else
   soc = socket (AF_PACKET, SOCK_RAW, htons (ETH_P_ALL));
@@ -229,7 +229,7 @@
   u_char dst_haddr[ETHER_ADDR_LEN];
   memcpy (&dst_haddr, (struct pseudo_frame *) frame, ETHER_ADDR_LEN);
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct sockaddr_dl soc_addr;
 #else
   struct sockaddr_ll soc_addr;
@@ -301,7 +301,7 @@
 
   *frame = (struct pseudo_frame *) g_malloc0 (sizeof (struct pseudo_frame)
                                               + payload_sz);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   memcpy ((*frame)->framehdr.ether_dhost, ether_dst_addr, ETHER_ADDR_LEN);
   memcpy ((*frame)->framehdr.ether_shost, ether_src_addr, ETHER_ADDR_LEN);
   (*frame)->framehdr.ether_type = htons (ether_proto);
@@ -473,7 +473,7 @@
   strncpy (ifr.ifr_name, if_name, sizeof (ifr.ifr_name) - 1);
   g_free (if_name);
   ifr.ifr_name[sizeof (ifr.ifr_name) - 1] = '\0';
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   sock = socket(AF_INET, SOCK_DGRAM, 0);
 #else
   sock = socket (PF_INET, SOCK_STREAM, 0);
