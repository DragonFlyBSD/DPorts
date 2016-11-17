--- src/libstd/sys/unix/os.rs.orig	2016-11-08 03:16:18 UTC
+++ src/libstd/sys/unix/os.rs
@@ -73,12 +73,13 @@ pub fn set_errno(e: i32) {
 
 #[cfg(target_os = "dragonfly")]
 pub fn errno() -> i32 {
-    extern {
-        #[thread_local]
-        static errno: c_int;
+    unsafe {
+        extern {
+            #[thread_local]
+            static errno: c_int;
+        }
+        errno as i32
     }
-
-    errno as i32
 }
 
 /// Gets a detailed string description for the given error number.
@@ -219,8 +220,44 @@ pub fn current_exe() -> io::Result<PathB
     }
 }
 
+// Since DragonFly 4.6.1 (commit [1]), the "kern.proc.pathname" sysctl works "correctly", i.e. it
+// does not return paths including a ":" (see [2]). The sysctl has now the same output as reading
+// from "/proc/curproc/file". As procfs is deprecated on DragonFly and not guaranteed to be
+// mounted, the sysctl is the preferred method. For older versions of DragonFly, we fall back to
+// the procfs method. We determine an older version by inspecting the returned path. If it contains
+// an ":", we try the procfs method.
+//
+// [1]: https://gitweb.dragonflybsd.org/dragonfly.git/commit/726f7ca07e193db73635e9c4e24e40c96087d6d9
+// [2]: https://gist.github.com/mneumann/a2f6b6a0a03935b561d6185872a4b222
 #[cfg(target_os = "dragonfly")]
 pub fn current_exe() -> io::Result<PathBuf> {
+    unsafe {
+        let mut mib = [libc::CTL_KERN as c_int,
+                       libc::KERN_PROC as c_int,
+                       libc::KERN_PROC_PATHNAME as c_int,
+                       -1 as c_int];
+        let mut sz: libc::size_t = 0;
+        cvt(libc::sysctl(mib.as_mut_ptr(), mib.len() as ::libc::c_uint,
+                         ptr::null_mut(), &mut sz, ptr::null_mut(),
+                         0 as libc::size_t))?;
+        if sz == 0 {
+            return Err(io::Error::last_os_error())
+        }
+        let mut v: Vec<u8> = Vec::with_capacity(sz as usize);
+        cvt(libc::sysctl(mib.as_mut_ptr(), mib.len() as ::libc::c_uint,
+                         v.as_mut_ptr() as *mut libc::c_void, &mut sz,
+                         ptr::null_mut(), 0 as libc::size_t))?;
+        if sz == 0 {
+            return Err(io::Error::last_os_error());
+        }
+        v.set_len(sz as usize - 1); // chop off trailing NUL
+        if !v.contains(&b':') {
+            // This is a valid path without a ":"
+            return Ok(PathBuf::from(OsString::from_vec(v)));
+        }
+    }
+
+    // Fall back to procfs
     ::fs::read_link("/proc/curproc/file")
 }
 
