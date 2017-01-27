--- src/applets/memory.c.orig	2016-01-12 03:32:16.000000000 +0200
+++ src/applets/memory.c
@@ -21,7 +21,7 @@
 #include <errno.h>
 #if defined(__linux__)
 # include <sys/sysinfo.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/sysctl.h>
 # include <sys/vmmeter.h>
 # include <vm/vm_param.h>
@@ -52,7 +52,7 @@ static Memory * _memory_init(PanelApplet
 static void _memory_destroy(Memory * memory);
 
 /* callbacks */
-#if defined(__FreeBSD__) || defined(__linux__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__linux__) || defined(__NetBSD__) || defined(__DragonFly__)
 static gboolean _memory_on_timeout(gpointer data);
 #endif
 
@@ -77,7 +77,7 @@ PanelAppletDefinition applet =
 /* memory_init */
 static Memory * _memory_init(PanelAppletHelper * helper, GtkWidget ** widget)
 {
-#if defined(__FreeBSD__) || defined(__linux__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__linux__) || defined(__NetBSD__) || defined(__DragonFly__)
 	const int timeout = 5000;
 	Memory * memory;
 	PangoFontDescription * desc;
@@ -156,7 +156,7 @@ static gboolean _memory_on_timeout(gpoin
 	gtk_range_set_value(GTK_RANGE(memory->scale), value);
 	return TRUE;
 }
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 static gboolean _memory_on_timeout(gpointer data)
 {
 	Memory * memory = data;
