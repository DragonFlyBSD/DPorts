--- src/command.c.orig	2015-11-01 10:36:39.000000000 +0200
+++ src/command.c
@@ -1011,7 +1011,7 @@ int run_ipconfig(int argc, char **argv)
 		icidr = 24;
 		
 	if (rip == -1 || gip == -1 || rip == gip ||
-#ifdef Linux
+#if defined(Linux) || defined(__DragonFly__)
 	    ((rip & 0x7f) == 0x7f) || rip == 0 || IN_MULTICAST(ntohl(rip))) {
 #else
 	    IN_LOOPBACK(ntohl(rip)) || IN_ZERONET(ntohl(rip)) || IN_MULTICAST(ntohl(rip))) {
