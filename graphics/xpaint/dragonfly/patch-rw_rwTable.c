--- rw/rwTable.c.intermediate	2015-12-18 20:45:04.000000000 +0200
+++ rw/rwTable.c
@@ -366,7 +366,7 @@ RWtableGetWriterList()
 char *
 RWGetMsg()
 {
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #if defined(BSD4_4)
     __const extern char *__const sys_errlist[];
 #else
