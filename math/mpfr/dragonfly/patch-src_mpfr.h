--- src/mpfr.h.orig	2018-02-07 12:50:31 UTC
+++ src/mpfr.h
@@ -49,6 +49,7 @@ http://www.gnu.org/licenses/ or write to
 #define MPFR_VERSION \
 MPFR_VERSION_NUM(MPFR_VERSION_MAJOR,MPFR_VERSION_MINOR,MPFR_VERSION_PATCHLEVEL)
 
+#include <stdint.h>
 #include <gmp.h>
 
 /* Avoid some problems with macro expansion if the user defines macros
