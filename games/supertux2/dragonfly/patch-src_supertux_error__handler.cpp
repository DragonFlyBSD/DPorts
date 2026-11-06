--- src/supertux/error_handler.cpp.orig	2026-03-15 05:38:51 UTC
+++ src/supertux/error_handler.cpp
@@ -69,7 +69,7 @@ ErrorHandler::set_handlers()
 static PCONTEXT pcontext = NULL;
 #endif
 
-#ifdef _GNU_SOURCE
+#if defined(_GNU_SOURCE) || defined(__DragonFly__)
 # include <cxxabi.h>
 #endif
 
