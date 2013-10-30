--- src/pyodbc.h.intermediate	2013-10-30 13:25:18.347948000 +0000
+++ src/pyodbc.h
@@ -76,7 +76,7 @@ inline void UNUSED(...) { }
 #include <stdarg.h>
 
 #if defined(__SUNPRO_CC) || defined(__SUNPRO_C) || (defined(__GNUC__) && !defined(__MINGW32__))
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #define CDECL cdecl
