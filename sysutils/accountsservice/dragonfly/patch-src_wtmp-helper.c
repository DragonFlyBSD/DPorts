--- src/wtmp-helper.c.orig	2016-01-27 18:38:21 UTC
+++ src/wtmp-helper.c
@@ -57,9 +57,11 @@ static gboolean
 wtmp_helper_start (void)
 {
 #if defined(HAVE_SETUTXDB)
+#  ifdef __FreeBSD__
                 if (setutxdb (UTXDB_LOG, NULL) != 0) {
                         return FALSE;
                 }
+#  endif
 #elif defined(PATH_WTMP)
                 if (utmpxname (PATH_WTMP) != 0) {
                         return FALSE;
