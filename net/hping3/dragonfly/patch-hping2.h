--- hping2.h.orig	2004-06-04 07:22:38 UTC
+++ hping2.h
@@ -88,6 +88,7 @@
 /* header size of some physical layer type */
 #define PPPHDR_SIZE_LINUX	0
 #define PPPHDR_SIZE_FREEBSD	4
+#define PPPHDR_SIZE_DRAGONFLY	4
 #define PPPHDR_SIZE_OPENBSD	4
 #define PPPHDR_SIZE_NETBSD	4
 #define PPPHDR_SIZE_BSDI	4
@@ -419,7 +420,7 @@ void	scanmain(void);
 void	hping_script(int argc, char **argv);
 u_int32_t hp_rand(void);
 #if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && \
-    !defined(__bsdi__) && !defined(__APPLE__)
+    !defined(__bsdi__) && !defined(__APPLE__) && !defined(__DragonFly__)
 size_t strlcpy(char *dst, const char *src, size_t siz);
 #endif
 
