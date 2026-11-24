--- src/mods/3zb2/q_shared.h.orig
+++ src/mods/3zb2/q_shared.h
@@ -1156,7 +1156,7 @@
 // PGM
 // ==================
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define stricmp strcasecmp 
 #define _stricmp strcasecmp 
 #define _strnicmp strncasecmp
