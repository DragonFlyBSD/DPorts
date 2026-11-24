--- edflib.c.orig
+++ edflib.c
@@ -38,7 +38,7 @@
 #define EDFLIB_VERSION  (127)
 #define EDFLIB_MAXFILES  (64)
 
-#if defined(__APPLE__) || defined(__MACH__) || defined(__APPLE_CC__) || defined(__HAIKU__) || defined(__ANDROID__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__MACH__) || defined(__APPLE_CC__) || defined(__HAIKU__) || defined(__ANDROID__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #define fopeno fopen
 
