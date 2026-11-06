--- src/common/common.h.orig	2014-06-05 04:18:39 UTC
+++ src/common/common.h
@@ -49,7 +49,7 @@ Foundation, Inc., 59 Temple Place - Suite 330, Boston,
 #    define SO_EXT "so"
 #  endif
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 #  define BUILDSTRING_OS "FreeBSD"
 #  ifndef SO_EXT
 #    define SO_EXT "so"
