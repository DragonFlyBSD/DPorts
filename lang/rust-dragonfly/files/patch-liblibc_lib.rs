--- src/liblibc/lib.rs.orig
+++ src/liblibc/lib.rs
@@ -1115,7 +1115,6 @@ pub mod types {
             pub mod posix88 {
                 pub type off_t = i64;
                 pub type dev_t = u32;
-                pub type ino_t = u32;
                 pub type pid_t = i32;
                 pub type uid_t = u32;
                 pub type gid_t = u32;
