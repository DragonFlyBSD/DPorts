--- ldap/sdks/c-sdk/ldap/libraries/liblber/lber-int.h.orig	2015-03-22 03:01:09 UTC
+++ ldap/sdks/c-sdk/ldap/libraries/liblber/lber-int.h
@@ -63,7 +63,7 @@ extern "C" {
 #ifdef macintosh
 # include "ldap-macos.h"
 #else /* macintosh */
-#if !defined(BSDI) && !defined(DARWIN) && !defined(FREEBSD) && !defined(OPENBSD)
+#if !defined(BSDI) && !defined(__DragonFly__) && !defined(FREEBSD) && !defined(OPENBSD)
 # include <malloc.h>
 #endif
 # include <errno.h>
