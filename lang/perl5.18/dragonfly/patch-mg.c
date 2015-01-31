--- mg.c.orig	2014-10-01 01:33:00 UTC
+++ mg.c
@@ -2929,7 +2929,7 @@ Perl_magic_set(pTHX_ SV *sv, MAGIC *mg)
 	 * the setproctitle() routine to manipulate that. */
 	if (PL_origalen != 1) {
 	    s = SvPV_const(sv, len);
-#   if __FreeBSD_version > 410001
+#   ifdef __DragonFly__
 	    /* The leading "-" removes the "perl: " prefix,
 	     * but not the "(perl) suffix from the ps(1)
 	     * output, because that's what ps(1) shows if the
