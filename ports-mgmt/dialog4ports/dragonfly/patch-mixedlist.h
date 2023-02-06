--- mixedlist.h.orig	2023-01-04 08:53:12.754178000 +0100
+++ mixedlist.h	2023-01-04 08:53:09.913846000 +0100
@@ -5,6 +5,14 @@
 #define CTRL_R				18
 #define F1					265
 
+#if defined (__DragonFly__)
+#undef  MIN
+#define MIN(x,y) ((x) < (y) ? (x) : (y))
+
+#undef  MAX
+#define MAX(x,y) ((x) > (y) ? (x) : (y))
+#endif
+
 /* Include all borders, buttons spaces etc.. in dialog window */
 #define MAGIC_BORDER		6
 
