--- xpaintrw/rwTable.c.orig
+++ xpaintrw/rwTable.c
@@ -294,7 +294,7 @@
 char *
 RWGetMsg()
 {
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #if defined(BSD4_4)
     __const extern char *__const sys_errlist[];
 #else
