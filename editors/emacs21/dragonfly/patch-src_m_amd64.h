--- src/m/amd64.h.intermediate	2013-01-24 10:41:06.159337000 +0100
+++ src/m/amd64.h	2013-01-24 10:50:43.850144000 +0100
@@ -151,13 +151,6 @@
 
 #define XPNTR(a) XUINT (a)
 
-#ifndef NOT_C_CODE
-/* We need these because pointers are larger than the default ints.  */
-#if !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
-#include <alloca.h>
-#endif
-#endif /* not NOT_C_CODE */
-
 /* On the Alpha it's best to avoid including TERMIO since struct
    termio and struct termios are mutually incompatible.  */
 /* #define NO_TERMIO */
