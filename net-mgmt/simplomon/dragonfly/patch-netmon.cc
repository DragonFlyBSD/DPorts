--- netmon.cc.orig
+++ netmon.cc
@@ -10,7 +10,7 @@
 #include <netinet/ip6.h>
 #include "support.hh"
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <netinet/ip_icmp.h>
 #include <netinet/icmp6.h>
 #endif
@@ -340,7 +340,7 @@
 
 
 namespace {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 struct icmppacket
 {
 	struct icmphdr hdr;
@@ -366,7 +366,7 @@
 	return result;
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static std::string makeICMPQuery(int family, uint16_t id, uint16_t seq, size_t psize)
 {
   if(family==AF_INET) {
@@ -435,7 +435,7 @@
 msg_controllen=56, msg_flags=0}, 0) = 64
 */
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 bool HarvestTTL(struct msghdr* msgh, int* ttl) 
 {
   struct cmsghdr *cmsg;
@@ -483,7 +483,7 @@
   }
 }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 CheckResult PINGChecker::perform()
 {
 	return CheckResult();
