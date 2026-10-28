--- radiusd/version.c.orig
+++ radiusd/version.c
@@ -38,6 +38,9 @@
 #if defined(bsdi)
 	"bsdi",
 #endif
+#if defined(__DragonFly__)
+	"DragonFly",
+#endif
 #if defined(__FreeBSD__)
 	"FreeBSD",
 #endif
