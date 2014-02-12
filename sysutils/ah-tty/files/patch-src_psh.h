
$FreeBSD: head/sysutils/ah-tty/files/patch-src_psh.h 340725 2014-01-22 17:40:44Z mat $

--- src/psh.h.orig
+++ src/psh.h
@@ -52,7 +52,6 @@
    the screen - BEL is a good example (only one yet:) */
 #define IGNORECHARS "\007"
 
-extern WINDOW* ShellWin, *HelpWin;
 extern PANEL*  ShellPanel, *HelpPanel;
 
 /* function declarations */
