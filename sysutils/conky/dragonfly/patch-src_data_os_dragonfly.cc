--- src/data/os/dragonfly.cc.orig	2026-06-02 12:21:16 UTC
+++ src/data/os/dragonfly.cc
@@ -466,6 +466,30 @@ int get_battery_perct(const char *bat) {
   return batperct > 100 ? 100 : batperct;
 }
 
+void get_battery_power_draw(char *buffer, unsigned int n, const char *bat) {
+  union acpi_battery_ioctl_arg battio;
+  int acpifd;
+  double ret = 0;
+  (void)bat;
+
+  /*
+   * As hw.acpi.battery.rate on FreeBSD: the discharge rate of all units
+   * in mW, or -1 when not discharging.
+   */
+  battio.unit = ACPI_BATTERY_ALL_UNITS;
+  if ((acpifd = open("/dev/acpi", O_RDONLY)) < 0) {
+    LOG_ERROR("can't open ACPI device");
+  } else {
+    if (ioctl(acpifd, ACPIIO_BATT_GET_BATTINFO, &battio) == -1)
+      LOG_ERROR("can't get ACPI battery info");
+    else if (battio.battinfo.rate > 0)
+      ret = (double)battio.battinfo.rate / 1000;
+    close(acpifd);
+  }
+
+  snprintf(buffer, n, "%.1f", ret);
+}
+
 double get_battery_perct_bar(struct text_object *obj) {
   int batperct = get_battery_perct(obj->data.s);
   return batperct * 2.56 - 1;
