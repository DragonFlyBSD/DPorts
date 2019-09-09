--- src/logging.c.orig	2008-02-17 22:04:50 UTC
+++ src/logging.c
@@ -50,7 +50,7 @@ void updwtmpx(char *wfile, struct utmpx
 int  rxvt_write_bsd_utmp (int utmp_pos, struct utmp* wu);
 # endif
 #endif
-#if defined(WTMP_SUPPORT) && !defined(HAVE_UPDWTMP)
+#if defined(WTMP_SUPPORT) && defined (HAVE_STRUCT_UTMP) && !defined(HAVE_UPDWTMP)
 # ifndef UTEMPTER_SUPPORT
 void rxvt_update_wtmp    (const char *fname, const struct utmp *putmp);
 # endif
@@ -368,7 +368,7 @@ rxvt_write_bsd_utmp(int utmp_pos, struct
 /*
  * Update a BSD style wtmp entry
  */
-#if defined(WTMP_SUPPORT) && !defined(HAVE_UPDWTMP)
+#if defined(WTMP_SUPPORT) && defined(HAVE_STRUCT_UTMP) && !defined(HAVE_UPDWTMP)
 # ifndef UTEMPTER_SUPPORT
 /* INTPROTO */
 void
