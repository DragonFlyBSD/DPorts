--- squeezelite.h.intermediate	2020-11-26 18:29:05.000000000 +0000
+++ squeezelite.h
@@ -61,7 +61,7 @@
 #define WIN       1
 #define PORTAUDIO 1
 #define FREEBSD   0
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define LINUX     0
 #define OSX       0
 #define WIN       0
