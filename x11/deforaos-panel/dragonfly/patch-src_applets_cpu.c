--- src/applets/cpu.c.orig	2016-01-12 03:32:16.000000000 +0200
+++ src/applets/cpu.c
@@ -20,8 +20,8 @@
 #include <string.h>
 #include <time.h>
 #include <errno.h>
-#if defined(__FreeBSD__) || defined(__NetBSD__)
-# if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/resource.h>
 # endif
 # include <sys/sysctl.h>
@@ -41,7 +41,7 @@ typedef struct _PanelApplet
 	GtkWidget * widget;
 	GtkWidget * scale;
 	guint timeout;
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	int used;
 	int total;
 #endif
@@ -140,8 +140,8 @@ static void _cpu_destroy(CPU * cpu)
 /* cpu_get */
 static gboolean _cpu_get(CPU * cpu, gdouble * level)
 {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
-# if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 	char const name[] = "kern.cp_time";
 # elif defined(__NetBSD__)
 	int mib[] = { CTL_KERN, KERN_CP_TIME };
@@ -151,7 +151,7 @@ static gboolean _cpu_get(CPU * cpu, gdou
 	int used;
 	int total;
 
-# if defined(__FreeBSD__)
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 	if(sysctlbyname(name, &cpu_time, &size, NULL, 0) < 0)
 # elif defined(__NetBSD__)
 	if(sysctl(mib, sizeof(mib) / sizeof(*mib), &cpu_time, &size, NULL, 0)
