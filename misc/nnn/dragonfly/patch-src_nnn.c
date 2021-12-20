--- src/nnn.c.orig	2021-07-21 12:15:39 UTC
+++ src/nnn.c
@@ -47,7 +47,7 @@
 #include <sys/resource.h>
 #include <sys/stat.h>
 #include <sys/statvfs.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/event.h>
 #include <sys/time.h>
@@ -64,7 +64,7 @@
 #ifndef NCURSES_WIDECHAR
 #define NCURSES_WIDECHAR 1
 #endif
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) \
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__) \
 	|| defined(__APPLE__) || defined(__sun)
 #ifndef _XOPEN_SOURCE_EXTENDED
 #define _XOPEN_SOURCE_EXTENDED
@@ -551,7 +551,7 @@ static char * const utils[] = {
 	"tar",
 #ifdef __APPLE__
 	"bashlock",
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	"lock",
 #elif defined __HAIKU__
 	"peaclock",
@@ -1009,7 +1009,7 @@ static bool is_prefix(const char *restri
  */
 static void *xmemrchr(uchar_t *restrict s, uchar_t ch, size_t n)
 {
-#if defined(__GLIBC__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__GLIBC__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	return memrchr(s, ch, n);
 #else
 
@@ -4751,7 +4751,7 @@ static bool remote_mount(char *newpath)
  */
 static bool unmount(char *name, char *newpath, int *presel, char *currentpath)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	static char cmd[] = "umount";
 #else
 	static char cmd[] = "fusermount3"; /* Arch Linux utility */
@@ -4764,7 +4764,7 @@ static bool unmount(char *name, char *ne
 	bool hovered = FALSE;
 	char mntpath[PATH_MAX];
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 	/* On Ubuntu it's fusermount */
 	if (!found && !getutil(cmd)) {
 		cmd[10] = '\0';
@@ -4802,7 +4802,7 @@ static bool unmount(char *name, char *ne
 		return FALSE;
 	}
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	if (spawn(cmd, newpath, NULL, NULL, F_NORMAL)) {
 #else
 	if (spawn(cmd, "-qu", newpath, NULL, F_NORMAL)) {
@@ -4812,7 +4812,7 @@ static bool unmount(char *name, char *ne
 
 #ifdef __APPLE__
 		if (spawn(cmd, "-l", newpath, NULL, F_NORMAL)) {
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 		if (spawn(cmd, "-f", newpath, NULL, F_NORMAL)) {
 #else
 		if (spawn(cmd, "-quz", newpath, NULL, F_NORMAL)) {
