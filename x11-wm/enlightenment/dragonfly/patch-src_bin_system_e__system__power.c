--- src/bin/system/e_system_power.c.orig	2020-07-26 16:39:12 UTC
+++ src/bin/system/e_system_power.c
@@ -32,7 +32,7 @@ _cb_power_hibernate(void *data EINA_UNUS
 static void
 _power_halt_init(void)
 {
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
    _cmd_halt = strdup("shutdown -p now");
 #else
    if (ecore_file_app_installed("systemctl"))
@@ -48,7 +48,7 @@ _power_halt_init(void)
 static void
 _power_reboot_init(void)
 {
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
    _cmd_reboot = strdup("shutdown -r now");
 #else
    if (ecore_file_app_installed("systemctl"))
@@ -63,7 +63,7 @@ _power_reboot_init(void)
 static void
 _power_suspend_init(void)
 {
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
    if (ecore_file_app_installed("zzz"))
      _cmd_suspend = strdup("zzz");
 #else
@@ -90,7 +90,7 @@ _power_suspend_init(void)
 static void
 _power_hibernate_init(void)
 {
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
    if (ecore_file_app_installed("acpiconf"))
      _cmd_hibernate = strdup("acpiconf -s4");
 #else
