--- clients/uil/UilDefI.h.intermediate	2012-12-30 23:35:43.817927000 +0100
+++ clients/uil/UilDefI.h	2012-12-30 23:36:36.618001000 +0100
@@ -270,7 +270,8 @@
 #include "UilIODef.h"
 #include "UilDiagDef.h"
 #include "UilSarDef.h"
-#if defined(linux) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(linux) || defined(__APPLE__) || defined(__FreeBSD__) \
+ || defined(__DragonFly__)
 #define YYSTYPE yystype
 #endif
 #include "UilLexPars.h"
