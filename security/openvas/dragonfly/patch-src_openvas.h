--- src/openvas.h.orig
+++ src/openvas.h
@@ -12,7 +12,7 @@
 #define OPENVAS_H
 
 int
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 openvas (int, char **);
 #else
 openvas (int, char **, char **);
