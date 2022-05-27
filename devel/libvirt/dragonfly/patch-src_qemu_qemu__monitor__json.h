--- src/qemu/qemu_monitor_json.h.orig	2022-03-01 09:08:21 UTC
+++ src/qemu/qemu_monitor_json.h
@@ -529,6 +529,11 @@ qemuMonitorJSONGetKVMState(qemuMonitor *
                            bool *present)
     ATTRIBUTE_NONNULL(2) ATTRIBUTE_NONNULL(3);
 
+int qemuMonitorJSONGetNVMMState(qemuMonitor *mon,
+                               bool *enabled,
+                               bool *present)
+    ATTRIBUTE_NONNULL(2) ATTRIBUTE_NONNULL(3);
+
 int
 qemuMonitorJSONGetObjectTypes(qemuMonitor *mon,
                               char ***types)
