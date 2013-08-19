--- dualserverd.h.intermediate	2013-08-19 09:58:19.810566000 +0000
+++ dualserverd.h
@@ -623,14 +623,14 @@ struct data20
 
 struct msg_control
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   u_long cmsg_len;
 #else
 	ulong cmsg_len;
 #endif
 	int cmsg_level;
 	int cmsg_type;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     // Arbitrary size, when the size is required we use sizeof
     unsigned char pktinfo[100];
 #else
@@ -753,7 +753,7 @@ struct DhcpConnType
 	union
 	{
 		int broadCastVal;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) | defined(__DragonFly__)
         int pktinfoVal;
 #else
 		bool pktinfoVal;
