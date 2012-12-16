
$FreeBSD: ports/irc/ctrlproxy/files/patch-lib_listener.h,v 1.2 2012/11/17 05:58:28 svnexp Exp $

--- lib/listener.h.orig
+++ lib/listener.h
@@ -5,8 +5,12 @@
 #include "ctrlproxy.h"
 
 #ifdef HAVE_GSSAPI
+#if (__FreeBSD__ >= 7)
+#include <gssapi/gssapi.h>
+#else
 #include <gssapi.h>
 #endif
+#endif
 
 #ifndef G_MODULE_EXPORT
 #define G_MODULE_EXPORT
