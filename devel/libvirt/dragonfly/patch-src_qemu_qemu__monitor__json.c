--- src/qemu/qemu_monitor_json.c.orig	2021-06-01 09:58:21 UTC
+++ src/qemu/qemu_monitor_json.c
@@ -6300,6 +6300,48 @@ int qemuMonitorJSONGetKVMState(qemuMonit
     return ret;
 }
 
+int qemuMonitorJSONGetNVMMState(qemuMonitor *mon,
+                               bool *enabled,
+                               bool *present)
+{
+    int ret = -1;
+    virJSONValue *cmd = NULL;
+    virJSONValue *reply = NULL;
+    virJSONValue *data = NULL;
+
+    /* Safe defaults */
+    *enabled = *present = false;
+
+    if (!(cmd = qemuMonitorJSONMakeCommand("query-nvmm", NULL)))
+        return -1;
+
+    if (qemuMonitorJSONCommand(mon, cmd, &reply) < 0)
+        goto cleanup;
+
+    if (qemuMonitorJSONHasError(reply, "CommandNotFound")) {
+        ret = 0;
+        goto cleanup;
+    }
+
+    if (qemuMonitorJSONCheckReply(cmd, reply, VIR_JSON_TYPE_OBJECT) < 0)
+        goto cleanup;
+
+    data = virJSONValueObjectGetObject(reply, "return");
+
+    if (virJSONValueObjectGetBoolean(data, "enabled", enabled) < 0 ||
+        virJSONValueObjectGetBoolean(data, "present", present) < 0) {
+        virReportError(VIR_ERR_INTERNAL_ERROR, "%s",
+                       _("query-kvm replied unexpected data"));
+        goto cleanup;
+    }
+
+    ret = 0;
+
+ cleanup:
+    virJSONValueFree(cmd);
+    virJSONValueFree(reply);
+    return ret;
+}
 
 int qemuMonitorJSONGetObjectTypes(qemuMonitor *mon,
                                   char ***types)
