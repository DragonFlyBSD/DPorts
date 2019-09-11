--- lib/cyrusdb_twoskip.c.orig	2016-05-20 08:52:44.000000000 +0300
+++ lib/cyrusdb_twoskip.c
@@ -447,6 +447,9 @@ static int recovery2(struct dbengine *db
 #define FNAME(db) mappedfile_fname((db)->mf)
 
 /* calculate padding size */
+#ifdef __DragonFly__
+#undef roundup
+#endif
 static size_t roundup(size_t record_size, int howfar)
 {
     if (record_size % howfar)
