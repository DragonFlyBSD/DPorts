--- ckucmd.c.orig
+++ ckucmd.c
@@ -7690,9 +7690,17 @@
 #ifdef USE_FILE_R                       /* FreeBSD, OpenBSD, etc */
 #ifdef NOARROWKEYS
     debug(F101,"cmdconchk NOARROWKEYS x","",0);
+#else
+#ifdef __DragonFly__
+    {                                   /* FILE is opaque on DragonFly */
+        struct __FILE_public *fpp = (struct __FILE_public *)__stdinp;
+        debug(F101,"cmdconchk stdin->_r","",fpp->_r);
+        x = fpp->_r;
+    }
 #else
     debug(F101,"cmdconchk stdin->_r","",stdin->_r);
     x = stdin->_r;                      /* FILE is opaque on current */
+#endif /* __DragonFly__ */
 #endif /* NOARROWKEYS */                /* OpenBSD; _r is inaccessible */
     if (x == 0) x = conchk();
     if (x < 0) x = 0;
