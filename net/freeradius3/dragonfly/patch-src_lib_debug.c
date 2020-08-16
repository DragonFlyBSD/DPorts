--- src/lib/debug.c.orig	2020-03-24 14:55:09 UTC
+++ src/lib/debug.c
@@ -501,7 +501,7 @@ static int fr_set_dumpable_flag(bool dum
 
 	return 0;
 }
-#elif defined(HAVE_SYS_PROCCTL_H)
+#elif defined(HAVE_SYS_PROCCTL_H) && defined(PROC_TRACE_CTL_ENABLE)
 static int fr_set_dumpable_flag(bool dumpable)
 {
 	int mode = dumpable ? PROC_TRACE_CTL_ENABLE : PROC_TRACE_CTL_DISABLE;
@@ -542,7 +542,7 @@ static int fr_get_dumpable_flag(void)
 	if (ret != 1) return 0;
 	return 1;
 }
-#elif defined(HAVE_SYS_PROCCTL_H)
+#elif defined(HAVE_SYS_PROCCTL_H) && defined(PROC_TRACE_CTL)
 static int fr_get_dumpable_flag(void)
 {
 	int status;
