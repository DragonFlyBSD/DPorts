--- smtptrapd.c.intermediate	2016-07-09 20:13:44 UTC
+++ smtptrapd.c
@@ -677,7 +677,7 @@ int main(int argc, char **argv) {
 	/* background the process */
 	if (fork()) exit(0);
 	if (fork()) exit(0);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	setpgrp(0, 0);
 #else
 	setpgrp(); 
