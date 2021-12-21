--- src/include/baconfig.h.orig	2020-07-09 17:30:11 UTC
+++ src/include/baconfig.h
@@ -158,6 +158,10 @@ void InitWinAPIWrapper();
    #ifndef bindtextdomain
       #define bindtextdomain(p, d)
    #endif
+#ifdef __DragonFly__
+/* <regex.h> include <xlocale.h> including <locale.h> */
+#include <locale.h>
+#endif
    #ifndef setlocale
       #define setlocale(p, d)
    #endif
