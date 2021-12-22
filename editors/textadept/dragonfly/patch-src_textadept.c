--- src/textadept.c.orig	2021-01-29 18:38:35 UTC
+++ src/textadept.c
@@ -23,7 +23,7 @@
 #define main main_
 #elif __APPLE__
 #include <mach-o/dyld.h> // for _NSGetExecutablePath
-#elif (__FreeBSD__ || __NetBSD__ || __OpenBSD__)
+#elif (__FreeBSD__ || __NetBSD__ || __OpenBSD__ || __DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -2528,7 +2528,7 @@ int main(int argc, char **argv) {
   osxapp = g_object_new(GTKOSX_TYPE_APPLICATION, NULL);
   platform = "OSX"; // OSX is only set for GUI version
 #endif
-#elif (__FreeBSD__ || __NetBSD__ || __OpenBSD__)
+#elif (__FreeBSD__ || __NetBSD__ || __OpenBSD__ || __DragonFly__)
   textadept_home = malloc(FILENAME_MAX + 1);
   int mib[] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
   size_t cb = FILENAME_MAX + 1;
