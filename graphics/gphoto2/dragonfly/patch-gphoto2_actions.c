--- gphoto2/actions.c.orig	2019-05-05 12:03:02 UTC
+++ gphoto2/actions.c
@@ -19,9 +19,15 @@
  * Boston, MA  02110-1301  USA
  */
 
+#if !defined(__DragonFly__)
 #define _XOPEN_SOURCE	/* strptime proto, but this hides other prototypes */
 #define _GNU_SOURCE	/* get all the other prototypes */
 #define __EXTENSIONS__	/* for solaris to get back strdup and strcasecmp */
+#endif
+
+#if defined(__DragonFly__)
+#include <libgen.h> /* for basename() */
+#endif
 
 #include "config.h"
 
