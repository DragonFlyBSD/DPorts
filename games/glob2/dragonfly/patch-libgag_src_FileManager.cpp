--- libgag/src/FileManager.cpp.bak	2015-12-06 18:35:31.000000000 +0200
+++ libgag/src/FileManager.cpp
@@ -92,7 +92,7 @@ namespace GAGCore
 		 * TODO: Make nicer */
 
 		char link[100];
-		#ifdef __FreeBSD__
+		#if defined(__FreeBSD__) || defined(__DragonFly__)
 		char proc[]="/proc/curproc/file";
 		#else
 		char proc[]="/proc/self/exe";
