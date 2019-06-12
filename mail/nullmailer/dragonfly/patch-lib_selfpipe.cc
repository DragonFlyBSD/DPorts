--- lib/selfpipe.cc.orig	2012-03-03 04:04:28 UTC
+++ lib/selfpipe.cc
@@ -20,6 +20,7 @@
 // <nullmailer-subscribe@lists.untroubled.org>.
 
 #include <sys/types.h>
+#include <sys/select.h>
 #include <errno.h>
 #include <fcntl.h>
 #include <signal.h>
