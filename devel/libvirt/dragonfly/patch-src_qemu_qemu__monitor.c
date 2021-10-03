--- src/qemu/qemu_monitor.c.orig	2021-06-01 09:58:21 UTC
+++ src/qemu/qemu_monitor.c
@@ -3825,6 +3825,17 @@ qemuMonitorGetKVMState(qemuMonitor *mon,
     return qemuMonitorJSONGetKVMState(mon, enabled, present);
 }
 
+qemuMonitorGetNVMMState(qemuMonitor *mon,
+                       bool *enabled,
+                       bool *present)
+{
+    VIR_DEBUG("enabled=%p present=%p", enabled, present);
+
+    QEMU_CHECK_MONITOR(mon);
+
+    return qemuMonitorJSONGetNVMMState(mon, enabled, present);
+}
+
 
 int
 qemuMonitorGetObjectTypes(qemuMonitor *mon,
