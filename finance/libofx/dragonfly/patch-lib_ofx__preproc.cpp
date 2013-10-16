--- lib/ofx_preproc.cpp.orig	2013-10-16 11:17:02.048404000 +0000
+++ lib/ofx_preproc.cpp
@@ -23,6 +23,7 @@
 #include <cstdlib>
 #include <stdio.h>
 #include <string>
+#include <sys/param.h>
 #include "ParserEventGeneratorKit.h"
 #include "libofx.h"
 #include "messages.hh"
@@ -310,7 +311,7 @@ int ofx_proc_file(LibofxContextPtr ctx,
             size_t outbytesleft = inbytesleft * 2 - 1;
             iconv_buffer = (char*) malloc (inbytesleft * 2);
             memset(iconv_buffer, 0, inbytesleft * 2);
-#if defined(OS_WIN32) || defined(__sun) || defined(__FreeBSD__)
+#if defined(OS_WIN32) || defined(__sun) || defined(__FreeBSD__) || defined(__DragonFly__)
             const char * inchar = (const char *)s_buffer.c_str();
 #else
             char * inchar = (char *)s_buffer.c_str();
