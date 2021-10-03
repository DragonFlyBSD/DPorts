--- src/qemu/qemu_monitor.h.orig	2021-06-01 09:58:21 UTC
+++ src/qemu/qemu_monitor.h
@@ -1244,6 +1244,9 @@ GHashTable *qemuMonitorGetCommandLineOpt
 int qemuMonitorGetKVMState(qemuMonitor *mon,
                            bool *enabled,
                            bool *present);
+int qemuMonitorGetNVMMState(qemuMonitor *mon,
+                           bool *enabled,
+                           bool *present);
 
 int qemuMonitorGetObjectTypes(qemuMonitor *mon,
                               char ***types);
