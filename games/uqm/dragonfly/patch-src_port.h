--- src/port.h.orig	2011-05-20 22:25:20.000000000 +0300
+++ src/port.h
@@ -453,7 +453,7 @@ typedef unsigned int wint_t;
 #		ifndef ESOCKTNOSUPPORT
 #			define ESOCKTNOSUPPORT  0x01100005
 #		endif
-#	elif  defined (__FreeBSD__) || defined (__OpenBSD__)
+#	elif  defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
 #		ifndef EBADMSG
 #			define EBADMSG EIO
 #		endif
