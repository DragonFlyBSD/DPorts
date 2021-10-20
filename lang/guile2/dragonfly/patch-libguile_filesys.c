--- libguile/filesys.c.intermediate	2017-11-02 14:50:03.000000000 +0200
+++ libguile/filesys.c
@@ -1486,7 +1486,7 @@ SCM_DEFINE (scm_i_mkstemp, "mkstemp!", 1
       mode_bits = scm_i_mode_bits (mode);
     }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   open_flags &= O_APPEND | O_DIRECT | O_SHLOCK | O_EXLOCK | O_CLOEXEC;
 #endif
   SCM_SYSCALL (rv = mkostemp (c_tmpl, open_flags));
