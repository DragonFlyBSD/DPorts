--- sudachi/src/plugin/loader.rs.orig
+++ sudachi/src/plugin/loader.rs
@@ -52,7 +52,7 @@
     plugins: Vec<<T as PluginCategory>::BoxType>,
 }
 
-#[cfg(any(target_os = "linux", target_os = "freebsd"))]
+#[cfg(any(target_os = "linux", target_os = "freebsd", target_os = "dragonfly"))]
 fn make_system_specific_name(s: &str) -> Option<String> {
     Some(format!("lib{}.so", s))
 }
