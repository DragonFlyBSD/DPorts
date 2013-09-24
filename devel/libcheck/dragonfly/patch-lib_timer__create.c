--- lib/timer_create.c.orig	2013-04-18 10:19:02.000000000 +0000
+++ lib/timer_create.c
@@ -1,6 +1,6 @@
 #include "libcompat.h"
 
-int timer_create(int clockid           CK_ATTRIBUTE_UNUSED, 
+int timer_create(clockid_t clockid           CK_ATTRIBUTE_UNUSED, 
                  struct sigevent *sevp CK_ATTRIBUTE_UNUSED, 
                  timer_t *timerid      CK_ATTRIBUTE_UNUSED)
 {
