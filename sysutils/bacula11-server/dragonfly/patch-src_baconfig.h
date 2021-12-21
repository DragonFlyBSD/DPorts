--- src/baconfig.h.intermediate	2021-12-21 13:09:46.000000000 +0000
+++ src/baconfig.h
@@ -181,6 +181,10 @@ void InitWinAPIWrapper();
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
