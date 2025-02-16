--- ui_ti.c.orig	Mon Dec 23 08:16:12 2024
+++ ui_ti.c	Mon Dec
@@ -2,7 +2,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
-#include <term.h>
+#include <ncurses/term.h>
 #include <termios.h>
 #include <unistd.h>
 #include <sys/types.h>
