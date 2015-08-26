--- src/lib/var.c.orig	2014-07-29 16:31:22 UTC
+++ src/lib/var.c
@@ -36,7 +36,7 @@
 #include "bacula.h"
 #if defined(HAVE_PCREPOSIX)
 #  include <pcreposix.h>
-#elif defined(HAVE_WIN32)
+#elif ! defined(HAVE_REGEX_H)
 #  include "bregex.h"
 #else
 #  include <regex.h>
