--- main.c.orig	2011-01-04 09:42:19.000000000 +0000
+++ main.c
@@ -833,7 +833,7 @@ main(int argc, char **argv, char **envp)
     mySignal(SIGPIPE, SigPipe);
 #endif
 
-    orig_GC_warn_proc = GC_set_warn_proc(wrap_GC_warn_proc);
+    GC_set_warn_proc(wrap_GC_warn_proc);
     err_msg = Strnew();
     if (load_argc == 0) {
 	/* no URL specified */
@@ -2261,7 +2261,7 @@ DEFUN(movR1, MOVE_RIGHT1,
 static wc_uint32
 getChar(char *p)
 {
-    return wc_any_to_ucs(wtf_parse1(&p));
+    return wc_any_to_ucs(wtf_parse1((wc_uchar *)&p));
 }
 
 static int
