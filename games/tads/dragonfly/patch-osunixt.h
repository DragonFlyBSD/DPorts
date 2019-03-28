--- osunixt.h.intermediate	2019-03-20 08:42:18 UTC
+++ osunixt.h
@@ -105,7 +105,7 @@ Tue Nov 22 15:16:10 EST 1994    Dave Bag
 #define OS_ULONG_DEFINED
 #endif
 
-#if defined(SGI_IRIX) || defined(LINUX_386) || defined(IBM_AIX)
+#if defined(SGI_IRIX) || defined(LINUX_386) || defined(IBM_AIX) || defined(FREEBSD_386)
 #define TERMIOS_IS_NOT_IN_SYS
 #endif
 
