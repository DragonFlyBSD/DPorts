--- long-hashtable.c.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ long-hashtable.c
@@ -22,7 +22,7 @@
 #include <string.h>
 
 #ifndef MACOS
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #endif
