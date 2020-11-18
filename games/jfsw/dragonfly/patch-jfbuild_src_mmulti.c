XXX no IP_SENDSRCADDR

--- jfbuild/src/mmulti.c.intermediate	2020-11-18 14:25:58.000000000 +0000
+++ jfbuild/src/mmulti.c
@@ -332,7 +332,7 @@ int netsend (int other, void *dabuf, int
 	memset(msg_control, 0, sizeof(msg_control));
 
 	cmsg = CMSG_FIRSTHDR(&msg);
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
 	// OS X doesn't implement setting the UDP4 source. We'll
 	// just have to cross our fingers.
 	if (replyfrom4[other].s_addr != INADDR_ANY) {
