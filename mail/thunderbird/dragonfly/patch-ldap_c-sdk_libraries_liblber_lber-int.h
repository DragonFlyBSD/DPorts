--- ldap/c-sdk/libraries/liblber/lber-int.h.orig	2016-04-07 21:14:24 UTC
+++ ldap/c-sdk/libraries/liblber/lber-int.h
@@ -63,7 +63,7 @@ extern "C" {
 #ifdef macintosh
 # include "ldap-macos.h"
 #else /* macintosh */
-#if !defined(BSDI) && !defined(DARWIN) && !defined(FREEBSD) && !defined(OPENBSD)
+#if !defined(BSDI) && !defined(DARWIN) && !defined(FREEBSD) && !defined(OPENBSD) && !defined(__DragonFly__)
 # include <malloc.h>
 #endif
 # include <errno.h>
