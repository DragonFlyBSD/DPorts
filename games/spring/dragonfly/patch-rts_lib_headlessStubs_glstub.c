--- rts/lib/headlessStubs/glstub.c.intermediate	2020-11-18 12:57:56.000000000 +0000
+++ rts/lib/headlessStubs/glstub.c
@@ -1,5 +1,6 @@
 /* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */
 
+#include "stddef.h"
 #include "glstub.h"
 
 #ifdef __cplusplus
