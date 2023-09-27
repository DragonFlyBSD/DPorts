--- libobs/graphics/graphics.h.orig	2023-06-18 22:05:22 UTC
+++ libobs/graphics/graphics.h
@@ -504,7 +504,7 @@ struct gs_window {
 	void *hwnd;
 #elif defined(__APPLE__)
 	__unsafe_unretained id view;
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	/* I'm not sure how portable defining id to uint32_t is. */
 	uint32_t id;
 	void *display;
