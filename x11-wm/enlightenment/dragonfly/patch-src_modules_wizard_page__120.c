--- src/modules/wizard/page_120.c.orig	2020-07-26 16:39:12 UTC
+++ src/modules/wizard/page_120.c
@@ -2,7 +2,7 @@
 #include "e_wizard.h"
 #include "e_wizard_api.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/types.h>
 # include <sys/sysctl.h>
 #endif
@@ -34,7 +34,7 @@
    }
  */
 
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
 #else
 static Eina_List *
 _wizard_temperature_get_bus_files(const char *bus)
@@ -100,7 +100,7 @@ wizard_page_show(E_Wizard_Page *pg EINA_
    Eina_List *tempdevs = NULL;
 #endif
    int hav_temperature = 0;
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
    // figure out on bsd if we have temp sensors
 #else
    const char *sensor_path[] = {
