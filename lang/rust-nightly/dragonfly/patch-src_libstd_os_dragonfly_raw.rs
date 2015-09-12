--- src/libstd/os/dragonfly/raw.rs.orig
+++ src/libstd/os/dragonfly/raw.rs
@@ -65,11 +65,11 @@ pub struct stat {
     #[stable(feature = "raw_ext", since = "1.1.0")]
     pub st_flags: fflags_t,
     #[stable(feature = "raw_ext", since = "1.1.0")]
-    pub st_gen: uint32_t,
+    pub st_gen: u32,
     #[stable(feature = "raw_ext", since = "1.1.0")]
-    pub st_lspare: int32_t,
+    pub st_lspare: i32,
     #[stable(feature = "raw_ext", since = "1.1.0")]
-    pub st_qspare1: int64_t,
+    pub st_qspare1: i64,
     #[stable(feature = "raw_ext", since = "1.1.0")]
-    pub st_qspare2: int64_t,
+    pub st_qspare2: i64,
 }
