--- src/wtmp-helper.c.orig	2023-08-12 19:01:30 UTC
+++ src/wtmp-helper.c
@@ -54,9 +54,11 @@ static gboolean
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
