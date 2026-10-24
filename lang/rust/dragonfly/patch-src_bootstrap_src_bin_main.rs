--- src/bootstrap/src/bin/main.rs.orig
+++ src/bootstrap/src/bin/main.rs
@@ -40,7 +40,8 @@
 
     let mut build_lock;
 
-    if !config.bypass_bootstrap_lock {
+    // DragonFly reports std file locks as unsupported here.
+    if !config.bypass_bootstrap_lock && !cfg!(target_os = "dragonfly") {
         // Display PID of process holding the lock
         // PID will be stored in a lock file
         let lock_path = config.out.join("lock");
