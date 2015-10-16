--- lib/utils/color.h.orig	2014-01-25 22:13:54.000000000 +0200
+++ lib/utils/color.h
@@ -26,6 +26,12 @@
 #include "utils.h"
 #include "options.h"
 
+/* zrj: differentiate between math.h vs cmath */
+#if defined(_GLIBCXX_USE_C99) && _GLIBCXX_USE_C99
+#include <cmath>
+using std::isnan;
+#endif
+
 QTC_BEGIN_DECLS
 
 typedef struct {
