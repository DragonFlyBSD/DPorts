
$FreeBSD: head/news/trn4/files/patch-term.c 340725 2014-01-22 17:40:44Z mat $

--- term.c.orig
+++ term.c
@@ -662,9 +662,9 @@
 #endif
     if (check_term) {
 # ifdef FIONREAD
-	long iocount;
+	int iocount;
 	ioctl(0, FIONREAD, &iocount);
-	return (int)iocount;
+	return iocount;
 # else /* !FIONREAD */
 #  ifdef HAS_RDCHK
 	return rdchk(0);
