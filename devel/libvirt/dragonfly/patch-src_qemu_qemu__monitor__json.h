--- src/qemu/qemu_monitor_json.h.orig	2021-06-01 09:58:21 UTC
+++ src/qemu/qemu_monitor_json.h
@@ -420,6 +420,11 @@ int qemuMonitorJSONGetKVMState(qemuMonit
                                bool *present)
     ATTRIBUTE_NONNULL(2) ATTRIBUTE_NONNULL(3);
 
+int qemuMonitorJSONGetNVMMState(qemuMonitor *mon,
+                               bool *enabled,
+                               bool *present)
+    ATTRIBUTE_NONNULL(2) ATTRIBUTE_NONNULL(3);
+
 int qemuMonitorJSONGetObjectTypes(qemuMonitor *mon,
                                   char ***types)
     ATTRIBUTE_NONNULL(2);
