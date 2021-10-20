--- src/libusbmuxd.c.orig	2020-06-08 20:53:51 UTC
+++ src/libusbmuxd.c
@@ -639,7 +639,7 @@ static void get_bundle_id()
 
 static void get_prog_name()
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	const char *pname = getprogname();
 	if (pname) {
 		prog_name = strdup(pname);
