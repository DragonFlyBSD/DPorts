--- plugins/python/src/plugin.cpp.orig
+++ plugins/python/src/plugin.cpp
@@ -154,8 +154,8 @@
     config.site_import = 0;
     dumpPyConfig(config);
     if (auto status = Py_InitializeFromConfig(&config); PyStatus_Exception(status))
-        throw runtime_error(format("Failed initializing the interpreter: {} {}",
-                                   status.func, status.err_msg));
+        throw runtime_error(string("Failed initializing the interpreter: ") +
+                                   status.func + " " + status.err_msg);
     PyConfig_Clear(&config);
     dumpPyConfig(config);
 }
