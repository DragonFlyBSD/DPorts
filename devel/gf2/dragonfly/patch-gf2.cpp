--- gf2.cpp.orig
+++ gf2.cpp
@@ -560,7 +560,7 @@
 	pipe(outputPipe);
 	pipe(inputPipe);
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
 	gdbPID = fork();
 
 	if(gdbPID == 0) {
