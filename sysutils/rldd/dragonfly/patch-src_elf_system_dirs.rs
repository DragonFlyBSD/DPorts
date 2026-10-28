--- src/elf/system_dirs.rs.orig
+++ src/elf/system_dirs.rs
@@ -312,6 +312,26 @@
     } else {
         &["/lib/casper", "/lib", "/usr/lib"]
     };
+    Ok(dirs
+        .iter()
+        .map(|path| search_path::SearchPath {
+            path: path.to_string(),
+            dev: 0,
+            ino: 0,
+        })
+        .collect())
+}
+
+#[cfg(target_os = "dragonfly")]
+pub fn get_system_dirs(
+    _interp: &Option<String>,
+    _is_musl: bool,
+    _e_machine: object::elf::Machine,
+    _ei_class: object::elf::FileClass,
+    _e_flags: object::elf::FileFlags,
+) -> Result<search_path::SearchPathVec, std::io::Error> {
+    // DragonFly rtld searches /lib and /usr/lib by default.
+    let dirs: &[&str] = &["/lib", "/usr/lib"];
     Ok(dirs
         .iter()
         .map(|path| search_path::SearchPath {
