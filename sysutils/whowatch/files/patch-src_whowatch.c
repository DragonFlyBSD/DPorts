--- src/whowatch.c.orig	2018-04-11 06:10:50 UTC
+++ src/whowatch.c
@@ -437,6 +437,10 @@ int main(int argc, char **argv)
 		tv.tv_sec -= (after.tv_sec - before.tv_sec);
 		if(retval > 0) {
 			key = getkey();
+			if(key == KBD_MORE) {
+				usleep(10000);
+				key = getkey();
+			}
 			key_action(key);
 		}
 		if(tv.tv_sec <= 0) {
