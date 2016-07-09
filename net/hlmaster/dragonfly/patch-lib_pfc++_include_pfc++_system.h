--- lib/pfc++/include/pfc++/system.h.orig	2001-11-01 02:30:36.000000000 +0200
+++ lib/pfc++/include/pfc++/system.h
@@ -39,7 +39,7 @@
 #define PFC_SYSTEM_LINUX
 #define PFC_SYSTEM_TYPE_UNIX
 
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 #define PFC_SYSTEM_FREEBSD
 #define PFC_SYSTEM_TYPE_UNIX
 
