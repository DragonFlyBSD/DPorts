--- tx/TXDialog.h.orig	2008-10-16 17:16:20.000000000 +0200
+++ tx/TXDialog.h	2013-01-22 17:28:31.546386000 +0100
@@ -30,6 +30,7 @@
 
 #include "TXWindow.h"
 #include <errno.h>
+#include <sys/select.h>
 
 class TXDialog : public TXWindow, public TXDeleteWindowCallback {
 public:
