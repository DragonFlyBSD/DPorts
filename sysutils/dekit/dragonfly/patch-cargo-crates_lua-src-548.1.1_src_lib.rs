--- cargo-crates/lua-src-548.1.1/src/lib.rs.orig
+++ cargo-crates/lua-src-548.1.1/src/lib.rs
@@ -134,7 +134,7 @@
             _ if target.contains("linux") => {
                 config.define("LUA_USE_LINUX", None);
             }
-            _ if target.ends_with("bsd") => {
+            _ if target.ends_with("bsd") || target.ends_with("dragonfly") => {
                 config.define("LUA_USE_LINUX", None);
             }
             _ if target.contains("apple-darwin") => {
