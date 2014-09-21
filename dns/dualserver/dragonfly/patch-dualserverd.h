--- dualserverd.h.intermediate	2014-09-21 08:13:19.240298000 +0000
+++ dualserverd.h
@@ -53,10 +53,12 @@ typedef struct in_pktinfo IN_PKTINFO;
 #endif
 
 #ifndef __FreeBSD__
+#ifndef __DragonFly__
 #ifndef IFF_DYNAMIC
 #define IFF_DYNAMIC 0x8000
 #endif
 #endif
+#endif
 
 #define MYWORD unsigned short
 #define MYBYTE unsigned char
@@ -599,7 +601,7 @@ struct msg_control
 	u_long cmsg_len;
 	int cmsg_level;
 	int cmsg_type;
-  #ifdef __FreeBSD__
+  #if defined(__FreeBSD__) || defined(__DragonFly__)
   // Arbitrary size, when the size is required we use sizeof
   unsigned char pktinfo[100];
   #else
