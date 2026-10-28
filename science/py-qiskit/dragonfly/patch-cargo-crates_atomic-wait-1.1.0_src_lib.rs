--- cargo-crates/atomic-wait-1.1.0/src/lib.rs.orig
+++ cargo-crates/atomic-wait-1.1.0/src/lib.rs
@@ -19,6 +19,29 @@
 #[path = "freebsd.rs"]
 mod platform;
 
+// DragonFly: umtx_sleep(2) sleeps while *ptr == value (timeout 0: none);
+// umtx_wakeup(2) with a count of 0 wakes every waiter.
+#[cfg(target_os = "dragonfly")]
+mod platform {
+    use core::sync::atomic::AtomicU32;
+
+    #[inline]
+    pub fn wait(a: &AtomicU32, expected: u32) {
+        let ptr: *const AtomicU32 = a;
+        unsafe { libc::umtx_sleep(ptr as *const libc::c_int, expected as libc::c_int, 0) };
+    }
+
+    #[inline]
+    pub fn wake_one(ptr: *const AtomicU32) {
+        unsafe { libc::umtx_wakeup(ptr as *const libc::c_int, 1) };
+    }
+
+    #[inline]
+    pub fn wake_all(ptr: *const AtomicU32) {
+        unsafe { libc::umtx_wakeup(ptr as *const libc::c_int, 0) };
+    }
+}
+
 /// If the value is `value`, wait until woken up.
 ///
 /// This function might also return spuriously,
