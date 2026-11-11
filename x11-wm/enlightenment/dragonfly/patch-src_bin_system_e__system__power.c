--- src/bin/system/e_system_power.c.orig
+++ src/bin/system/e_system_power.c
@@ -46,7 +46,7 @@
 static void
 _power_halt_init(void)
 {
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
    _cmd_halt = strdup("shutdown -p now");
 #else
    if (ecore_file_app_installed("systemctl"))
@@ -62,7 +62,7 @@
 static void
 _power_reboot_init(void)
 {
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
    _cmd_reboot = strdup("shutdown -r now");
 #else
    if (ecore_file_app_installed("systemctl"))
@@ -77,7 +77,7 @@
 static void
 _power_suspend_init(void)
 {
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
    if (ecore_file_app_installed("zzz"))
      _cmd_suspend = strdup("zzz");
 #else
@@ -104,7 +104,7 @@
 static void
 _power_hibernate_init(void)
 {
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined (__DragonFly__)
    if (ecore_file_app_installed("acpiconf"))
      _cmd_hibernate = strdup("acpiconf -s4");
 #elif defined (__OpenBSD__)
@@ -135,7 +135,7 @@
 static void
 _power_hybrid_suspend_init(void)
 {
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined (__DragonFly__)
 #elif defined (__OpenBSD__)
 #else
    if (ecore_file_app_installed("systemctl"))
@@ -151,7 +151,7 @@
 static void
 _power_suspend_then_hibernate_init(void)
 {
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined (__DragonFly__)
 #elif defined (__OpenBSD__)
 #else
    if (ecore_file_app_installed("systemctl"))
