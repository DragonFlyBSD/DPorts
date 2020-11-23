--- rfbproto.c.orig	2005-12-09 06:37:41 UTC
+++ rfbproto.c
@@ -27,6 +27,7 @@
 #include <sys/types.h>
 #include <errno.h>
 #include <pwd.h>
+#include <ctype.h>
 #include <x2vnc.h>
 #include <X11/Xatom.h>
 #include <vncauth.h>
