--- src/modules/battery/e_mod_sysctl.c.orig
+++ src/modules/battery/e_mod_sysctl.c
@@ -90,7 +90,7 @@
    for (int i = 0; i < n_units; i++)
      {
         battio.unit = i;
-        if (ioctl(fd, ACPIIO_BATT_GET_BIX, &battio) != -1)
+        if (ioctl(fd, ACPIIO_BATT_GET_BIF, &battio) != -1)
           {
              if (battio.bst.state == ACPI_BATT_STAT_NOT_PRESENT)
                continue;
@@ -100,11 +100,11 @@
 
              snprintf(buf, sizeof(buf), "hw.acpi.battery.%i", i);
              bat->udi = eina_stringshare_add(buf);
-             bat->technology = eina_stringshare_add(battio.bix.type);
-             bat->vendor = eina_stringshare_add(battio.bix.oeminfo);
-             bat->model = eina_stringshare_add(battio.bix.model);
-             bat->design_charge = battio.bix.dcap;
-             bat->last_full_charge = battio.bix.lfcap;
+             bat->technology = eina_stringshare_add(battio.bif.type);
+             bat->vendor = eina_stringshare_add(battio.bif.oeminfo);
+             bat->model = eina_stringshare_add(battio.bif.model);
+             bat->design_charge = battio.bif.dcap;
+             bat->last_full_charge = battio.bif.lfcap;
              bat->timer = ecore_timer_add(10.0, _battery_sysctl_battery_update_poll, NULL);
              bat->unit = i;
              device_batteries = eina_list_append(device_batteries, bat);
