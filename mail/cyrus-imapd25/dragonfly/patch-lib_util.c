--- lib/util.c.orig	2016-05-20 08:52:44.000000000 +0300
+++ lib/util.c
@@ -816,7 +816,9 @@ EXPORTED int parsehex(const char *p, con
 }
 
 /* buffer handling functions */
-
+#ifdef __DragonFly__
+#undef roundup
+#endif
 static size_t roundup(size_t size)
 {
     if (size < 32)
