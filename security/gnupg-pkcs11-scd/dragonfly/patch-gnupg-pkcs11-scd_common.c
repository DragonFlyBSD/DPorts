--- gnupg-pkcs11-scd/common.c.orig	2017-08-25 17:59:34 UTC
+++ gnupg-pkcs11-scd/common.c
@@ -30,6 +30,7 @@
 
 #include "common.h"
 #include <pkcs11-helper-1.0/pkcs11h-def.h>
+#include <stdint.h>
 
 static FILE *log_stream = NULL;
 
@@ -49,14 +50,14 @@ common_vlog (
 	const char * const format,
 	va_list args
 ) {
-	unsigned id;
+	uintmax_t id;
 #if defined(HAVE_W32_SYSTEM)
 	id = 0;
 #else
-	id = (unsigned)pthread_self ();
+	id = (uintmax_t)pthread_self ();
 #endif
 	if (log_stream != NULL) {
-		fprintf (log_stream, "%s[%u.%u]: ", PACKAGE, (unsigned)getpid (), id);
+		fprintf (log_stream, "%s[%u.%ju]: ", PACKAGE, (unsigned)getpid (), id);
 		vfprintf (log_stream, format, args);
 		fputc ('\n', log_stream);
 		fflush (log_stream);
