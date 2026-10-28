--- cargo-crates/glfw-0.41.0/src/ffi/mod.rs.orig
+++ cargo-crates/glfw-0.41.0/src/ffi/mod.rs
@@ -686,10 +686,10 @@
     #[cfg(target_os = "linux")]
     pub fn glfwGetGLXContext(window: *mut GLFWwindow) -> *mut c_void;
 
-    #[cfg(target_os = "freebsd")]
+    #[cfg(any(target_os = "freebsd", target_os = "dragonfly"))]
     pub fn glfwGetX11Window(window: *mut GLFWwindow) -> *mut c_void;
-    #[cfg(target_os = "freebsd")]
+    #[cfg(any(target_os = "freebsd", target_os = "dragonfly"))]
     pub fn glfwGetX11Display() -> *mut c_void;
-    #[cfg(target_os = "freebsd")]
+    #[cfg(any(target_os = "freebsd", target_os = "dragonfly"))]
     pub fn glfwGetGLXContext(window: *mut GLFWwindow) -> *mut c_void;
 }
