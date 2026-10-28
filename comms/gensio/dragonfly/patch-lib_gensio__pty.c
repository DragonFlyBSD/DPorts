--- lib/gensio_pty.c.orig
+++ lib/gensio_pty.c
@@ -16,9 +16,9 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <errno.h>
 #if HAVE_PTSNAME_R
 #include <unistd.h>
-#include <errno.h>
 #include <pwd.h>
 #include <grp.h>
 #include <limits.h>
