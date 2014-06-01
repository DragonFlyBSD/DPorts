--- src/process.h.orig	2014-05-01 07:58:16.000000000 +0000
+++ src/process.h
@@ -21,6 +21,7 @@ along with GNU Emacs.  If not, see <http
 #endif
 
 #include <unistd.h>
+#include <sys/signal.h>
 
 #ifdef HAVE_GNUTLS
 #include "gnutls.h"
