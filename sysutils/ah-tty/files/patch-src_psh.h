
$FreeBSD: sysutils/ah-tty/files/patch-src_psh.h 300897 2012-07-14 14:29:18Z beat $

--- src/psh.h.orig
+++ src/psh.h
@@ -52,7 +52,6 @@
    the screen - BEL is a good example (only one yet:) */
 #define IGNORECHARS "\007"
 
-extern WINDOW* ShellWin, *HelpWin;
 extern PANEL*  ShellPanel, *HelpPanel;
 
 /* function declarations */
