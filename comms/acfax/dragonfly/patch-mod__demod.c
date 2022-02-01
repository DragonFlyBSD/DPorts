--- mod_demod.c.intermediate	2022-01-31 21:38:00.000000000 +0000
+++ mod_demod.c
@@ -23,6 +23,7 @@
  * mod_demod.c - FM and AM modulator/demodulator for ACfax
  */
 
+#include <string.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
