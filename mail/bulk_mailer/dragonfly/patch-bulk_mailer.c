--- bulk_mailer.c.intermediate	2016-08-02 09:41:31 UTC
+++ bulk_mailer.c
@@ -127,7 +127,7 @@ char *strdup();
 char *strchr();
 char *strrchr();
 #endif
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 char *malloc ();
 char *realloc ();
 char *mktemp ();
