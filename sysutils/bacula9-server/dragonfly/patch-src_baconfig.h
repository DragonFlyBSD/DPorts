--- src/baconfig.h.intermediate	2021-12-21 13:00:25.000000000 +0000
+++ src/baconfig.h
@@ -164,6 +164,10 @@ void InitWinAPIWrapper();
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
