--- src/sn_data.h.orig
+++ src/sn_data.h
@@ -32,7 +32,7 @@
 int HEADSIZE[]={0    ,14};		/* ppp: 4 or 0 or nothing */
 #endif
 
-#ifdef __FreeBSD__				/* ppp: 4 or 0 ? */
+#if defined(__FreeBSD__) || defined(__DragonFly__)				/* ppp: 4 or 0 ? */
 #define NETDEV_NR      6
 char *NETDEV[]={"fxp","re","em","ppp","tun","lo"};
 int HEADSIZE[]={14   ,14  ,14  ,4    ,4    ,4   };
