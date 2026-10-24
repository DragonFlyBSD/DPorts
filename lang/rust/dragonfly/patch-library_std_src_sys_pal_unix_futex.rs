--- library/std/src/sys/pal/unix/futex.rs.orig
+++ library/std/src/sys/pal/unix/futex.rs
@@ -200,18 +200,46 @@
 
 #[cfg(target_os = "dragonfly")]
 pub fn futex_wait(futex: &Atomic<u32>, expected: u32, timeout: Option<Duration>) -> bool {
-    // A timeout of 0 means infinite.
-    // We round smaller timeouts up to 1 millisecond.
-    // Overflows are rounded up to an infinite timeout.
-    let timeout_ms =
-        timeout.and_then(|d| Some(i32::try_from(d.as_millis()).ok()?.max(1))).unwrap_or(0);
-
-    let r = unsafe {
-        libc::umtx_sleep(futex as *const Atomic<u32> as *const i32, expected as i32, timeout_ms)
-    };
-
-    r == 0 || crate::sys::io::errno() != libc::ETIMEDOUT
-}
+    use crate::sys::time::Instant;
+    use crate::sync::atomic::Ordering::Relaxed;
+
+    // DragonFly umtx_sleep takes a signed timeout in microseconds. A timeout of
+    // 0 means infinite, and overflows are rounded up to an infinite timeout.
+    let deadline = timeout.and_then(|d| Instant::now().checked_add_duration(&d));
+
+    loop {
+        if futex.load(Relaxed) != expected {
+            return true;
+        }
+
+        let timeout_us = match deadline {
+            Some(deadline) => {
+                let Some(remaining) = deadline.checked_sub_instant(&Instant::now()) else {
+                    return false;
+                };
+                if remaining.is_zero() {
+                    return false;
+                }
+                i32::try_from(remaining.as_micros()).unwrap_or(i32::MAX).max(1)
+            }
+            None => 0,
+        };
+
+        let r = unsafe {
+            libc::umtx_sleep(futex as *const Atomic<u32> as *const i32, expected as i32, timeout_us)
+        };
+
+        if r == 0 {
+            return true;
+        }
+
+        match crate::sys::io::errno() {
+            libc::EWOULDBLOCK | libc::EINTR | libc::EBUSY => continue,
+            _ => return true,
+        }
+    }
+}
+
 
 // DragonflyBSD doesn't tell us how many threads are woken up, so this always returns false.
 #[cfg(target_os = "dragonfly")]
