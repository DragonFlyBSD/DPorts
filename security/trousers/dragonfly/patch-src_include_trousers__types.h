--- src/include/trousers_types.h.intermediate	2013-05-16 07:12:43.992012000 +0000
+++ src/include/trousers_types.h
@@ -126,7 +126,7 @@ typedef struct tdTSS_KEY {
 	BYTE *encData;
 } TSS_KEY;
 
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) && !defined(__DragonFly__)
 #define BSD_CONST const
 #else
 #define BSD_CONST /* */
