--- ckucmd.c.orig	2011-07-14 15:14:37.000000000 +0300
+++ ckucmd.c	2016-06-15 16:12:08.000000000 +0300
@@ -7396,8 +7396,14 @@ cmdconchk() {
     if (x < 0) x = 0;
 #else  /* USE_FILE_CNT */
 #ifdef USE_FILE_R			/* FreeBSD, OpenBSD, etc */
+#ifdef __DragonFly__
+    struct __FILE_public *fpp = (struct __FILE_public *)__stdinp;
+    debug(F101,"cmdconchk stdin->_r","",fpp->_r);
+    x = fpp->_r;
+#else
     debug(F101,"cmdconchk stdin->_r","",stdin->_r);
     x = stdin->_r;
+#endif
     if (x == 0) x = conchk();
     if (x < 0) x = 0;
 
