--- Src/os.c.intermediate	2019-06-06 15:06:33.000000000 +0000
+++ Src/os.c
@@ -29,7 +29,7 @@ void os_detect()
 {
 #if defined(__linux__)
 	os = "linux";
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	os = "bsd";
 #elif defined(__APPLE__) && defined(__MACH__)
 	os = "macosx";
