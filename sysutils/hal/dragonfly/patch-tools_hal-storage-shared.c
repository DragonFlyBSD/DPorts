--- tools/hal-storage-shared.c.intermediate	2012-12-21 19:08:55.234746000 +0100
+++ tools/hal-storage-shared.c	2012-12-21 19:14:14.410754000 +0100
@@ -31,7 +31,7 @@
 #include <string.h>
 #include <glib.h>
 #include <glib/gstdio.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <fstab.h>
 #include <sys/param.h>
 #include <sys/ucred.h>
@@ -53,7 +53,7 @@
 
 #include "hal-storage-shared.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 struct mtab_handle
 {
   struct statfs	*mounts;
@@ -66,7 +66,7 @@
 gboolean
 mtab_open (gpointer *handle)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct mtab_handle *mtab;
 
 	mtab = g_new0 (struct mtab_handle, 1);
@@ -90,7 +90,7 @@
 char *
 mtab_next (gpointer handle, char **mount_point)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct mtab_handle *mtab = handle;
 
 	if (mtab->iter < mtab->n_mounts) {
@@ -131,7 +131,7 @@
 void
 mtab_close (gpointer handle)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	g_free (handle);
 #else
 	fclose (handle);
@@ -143,7 +143,7 @@
 gboolean
 fstab_open (gpointer *handle)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	return setfsent () == 1;
 #elif sun
 	*handle = fopen (VFSTAB, "r");
@@ -157,7 +157,7 @@
 char *
 fstab_next (gpointer handle, char **mount_point)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct fstab *fstab;
 
 	fstab = getfsent ();
@@ -188,14 +188,14 @@
 void
 fstab_close (gpointer handle)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	endfsent ();
 #else
 	fclose (handle);
 #endif
 }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define UMOUNT		"/sbin/umount"
 #elif sun
 #define UMOUNT		"/sbin/umount"
@@ -470,7 +470,7 @@
 	/* construct arguments to /bin/umount */
 	na = 0;
 	args[na++] = UMOUNT;
-#ifndef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	if (option_lazy)
 		args[na++] = "-l";
 #endif
@@ -645,7 +645,7 @@
 	/* construct arguments to EJECT_PROGRAM (e.g. /usr/bin/eject) */
 	na = 0;
 	args[na++] = EJECT_PROGRAM;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	args[na++] = "-f";
 	args[na++] = (char *) device;
 	if (closetray)
