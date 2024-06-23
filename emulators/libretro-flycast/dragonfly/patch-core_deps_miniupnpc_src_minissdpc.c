--- core/deps/miniupnpc/src/minissdpc.c.orig	2024-06-23 17:03:39 UTC
+++ core/deps/miniupnpc/src/minissdpc.c
@@ -40,7 +40,7 @@ static const IN6_ADDR in6addr_any_init =
 #endif
 #endif
 #endif /* _WIN32 */
-#if defined(__amigaos__) || defined(__amigaos4__)
+#if defined(__amigaos__) || defined(__amigaos4__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif /* defined(__amigaos__) || defined(__amigaos4__) */
 #if defined(__amigaos__)
