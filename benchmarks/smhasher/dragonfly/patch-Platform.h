--- Platform.h.bak	2015-09-20 12:56:13.000000000 +0300
+++ Platform.h
@@ -39,7 +39,7 @@ void SetAffinity ( int cpu );
 #else	//	defined(_MSC_VER)
 
 #include <stdint.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #endif
 
