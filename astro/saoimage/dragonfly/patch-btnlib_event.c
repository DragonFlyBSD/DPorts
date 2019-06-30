--- btnlib/event.c.intermdiate	2019-06-07 18:31:04.000000000 +0000
+++ btnlib/event.c
@@ -27,6 +27,7 @@ static char SccsId[] = "%W%  %G%";
 
 #include <stdio.h>	/* define stderr, NULL */
 #include <sys/types.h>	/* define stderr, NULL */
+#include <sys/select.h>
 #include <X11/Xlib.h>
 #include "buttons.h"
 
