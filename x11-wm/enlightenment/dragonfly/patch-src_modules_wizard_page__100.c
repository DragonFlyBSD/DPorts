--- src/modules/wizard/page_100.c.orig	2020-07-26 16:39:12 UTC
+++ src/modules/wizard/page_100.c
@@ -2,12 +2,12 @@
 #include "e_wizard.h"
 #include "e_wizard_api.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static char *
 read_file(const char *file)
 {
@@ -47,14 +47,19 @@ E_API int
 wizard_page_show(E_Wizard_Page *pg EINA_UNUSED)
 {
    int hav_cpufreq = 0;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
    char buf[PATH_MAX];
    size_t len = 0;
 
    len = sizeof(buf);
+#ifdef __DragonFly__
+   /* XXX specific to intel acpi */
+   if (sysctlbyname("hw.acpi.cpu.px_dom0.avail", buf, &len, NULL, 0) == 0)
+#else
    if (sysctlbyname("dev.cpu.0.freq_levels", buf, &len, NULL, 0) == 0)
+#endif
      hav_cpufreq = 1;
-#else
+#elif defined(__linux__)
    char *str, *p;
 
    str = read_file("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies");
