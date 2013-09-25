--- lib/ofx_preproc.cpp.intermediate	2013-09-25 21:22:34.577569000 +0000
+++ lib/ofx_preproc.cpp
@@ -23,6 +23,7 @@
 #include <stdlib.h>
 #include <stdio.h>
 #include <string>
+#include <sys/param.h>
 #include "ParserEventGeneratorKit.h"
 #include "libofx.h"
 #include "messages.hh"
@@ -231,7 +232,8 @@ int ofx_proc_file(LibofxContextPtr ctx,
           memset(iconv_buffer, 0, READ_BUFFER_SIZE * 2);
           size_t inbytesleft = strlen(s_buffer.c_str());
           size_t outbytesleft = READ_BUFFER_SIZE * 2 - 1;
-#if defined(OS_WIN32) || defined(__FreeBSD__)
+#if defined(OS_WIN32) || defined(__FreeBSD__) || \
+   (defined(__DragonFly__) && __DragonFly_version > 300502)
           const char * inchar = (const char *)s_buffer.c_str();
 #else
           char * inchar = (char *)s_buffer.c_str();
