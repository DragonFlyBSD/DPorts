--- src/modules/wizard/page_090.c.orig	2020-07-26 16:39:12 UTC
+++ src/modules/wizard/page_090.c
@@ -2,7 +2,7 @@
 #include "e_wizard.h"
 #include "e_wizard_api.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/ioctl.h>
 # include <sys/sysctl.h>
 # ifdef __i386__
@@ -81,7 +81,7 @@ wizard_page_show(E_Wizard_Page *pg EINA_
                }
           }
      }
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
    do {
         int mib_state[4];
         int state = 0;
