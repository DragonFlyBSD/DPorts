--- tools/updaterevision/updaterevision.c.orig	2016-10-01 04:13:53 UTC
+++ tools/updaterevision/updaterevision.c
@@ -65,7 +65,7 @@ int main(int argc, char **argv)
 #endif
 		if((stream = freopen(name, "w+b", stdout)) != NULL &&
 		   system(run) == 0 &&
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 		   errno == 0 &&
 #endif
 		   fseek(stream, 0, SEEK_SET) == 0 &&
