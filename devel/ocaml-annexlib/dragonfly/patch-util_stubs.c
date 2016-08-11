--- util_stubs.c.orig	2006-02-24 00:09:29.000000000 +0200
+++ util_stubs.c
@@ -1,6 +1,6 @@
 #include "config.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <sys/uio.h>
@@ -488,7 +488,7 @@ value stew_sendfile(value o, value i, va
     return Val_int(len);
   else
     uerror("sendfile", Nothing);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   enter_blocking_section();
   len = sendfile(outfd, infd, offset, len,
 		 NULL, &wrote, 0);
@@ -897,7 +897,7 @@ stew_setpgrp(value unit) {
 #if defined(HAVE_SETPGRP)
   /* This needs a better test to tell if we have 0, 1, or 2 argument
      forms of setpgrp() */
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__APPLE__)
   if (setpgid(0,0) < 0) 
 #else
   if (setpgrp() < 0) 
