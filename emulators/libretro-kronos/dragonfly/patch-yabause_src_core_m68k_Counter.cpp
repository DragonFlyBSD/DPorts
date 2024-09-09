--- yabause/src/core/m68k/Counter.cpp.orig	2021-06-01 21:12:00 UTC
+++ yabause/src/core/m68k/Counter.cpp
@@ -20,7 +20,7 @@ Foundation, Inc., 51 Franklin Street, Fi
 
 #include <stdio.h>
 #include <string.h>
-#if defined(__APPLE__)
+#if defined(__APPLE__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
