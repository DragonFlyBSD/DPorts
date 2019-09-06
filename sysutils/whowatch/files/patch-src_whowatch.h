--- src/whowatch.h.orig	2013-10-07 12:11:29 UTC
+++ src/whowatch.h
@@ -4,7 +4,7 @@
 #include <stdlib.h>
 #include <unistd.h>
 #include <fcntl.h>
-#include <utmp.h>
+#include <utmpx.h>
 #include <string.h>
 #include <signal.h>
 #include <sys/stat.h>
@@ -216,3 +216,6 @@ int getkey();
 /* term.c */
 void term_raw();
 
+/* forgotten */
+void info_reg(struct wdgt *);
+void scr_crsr_jmp(struct wdgt *w, int l);
