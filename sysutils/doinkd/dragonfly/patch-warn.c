--- warn.c.orig	2006-05-30 06:56:05 UTC
+++ warn.c
@@ -151,6 +151,9 @@ void warn(i, type, do_msg)
           * _ptr and _base.  Let me know if there are others, or if you
           * have a system independant way to fix it!
           */
+#ifdef __DragonFly__
+/* XXX what to do here? */
+#else
 #if defined(__linux__)
          termf->_IO_read_ptr = termf->_IO_read_base;
          termf->_IO_write_ptr = termf->_IO_write_base;
@@ -161,6 +164,7 @@ void warn(i, type, do_msg)
 #else
 	 termf->_ptr = termf->_base;
 #endif
+#endif
          (void) fclose (termf);
       }
 
