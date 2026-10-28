--- chklastlog.c.orig
+++ chklastlog.c
@@ -34,7 +34,7 @@
 #else
 #undef HAVE_LASTLOG_H
 #endif
-#if __FreeBSD__ > 9
+#if __FreeBSD__ > 9 || defined(__DragonFly__)
 int main () { return 0; }
 #else
 #include <stdio.h>
