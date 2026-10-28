--- cargo-crates/ctor-0.1.20/src/lib.rs.orig
+++ cargo-crates/ctor-0.1.20/src/lib.rs
@@ -143,7 +143,7 @@
                 .expect("Unable to create identifier");
 
         let output = quote!(
-            #[cfg(not(any(target_os = "linux", target_os = "android", target_os = "freebsd", target_os = "netbsd", target_os = "openbsd", target_os = "illumos", target_os = "macos", target_os = "ios", windows)))]
+            #[cfg(not(any(target_os = "linux", target_os = "android", target_os = "freebsd", target_os = "dragonfly", target_os = "netbsd", target_os = "openbsd", target_os = "illumos", target_os = "macos", target_os = "ios", windows)))]
             compile_error!("#[ctor] is not supported on the current target");
 
             #(#attrs)*
@@ -153,6 +153,7 @@
             #[allow(non_upper_case_globals)]
             #[cfg_attr(any(target_os = "linux", target_os = "android"), link_section = ".init_array")]
             #[cfg_attr(target_os = "freebsd", link_section = ".init_array")]
+            #[cfg_attr(target_os = "dragonfly", link_section = ".init_array")]
             #[cfg_attr(target_os = "netbsd", link_section = ".init_array")]
             #[cfg_attr(target_os = "openbsd", link_section = ".init_array")]
             #[cfg_attr(target_os = "illumos", link_section = ".init_array")]
@@ -204,7 +205,7 @@
                 .expect("Unable to create identifier");
 
         let output = quote!(
-            #[cfg(not(any(target_os = "linux", target_os = "android", target_os = "freebsd", target_os = "netbsd", target_os = "openbsd", target_os = "illumos", target_os = "macos", target_os = "ios", windows)))]
+            #[cfg(not(any(target_os = "linux", target_os = "android", target_os = "freebsd", target_os = "dragonfly", target_os = "netbsd", target_os = "openbsd", target_os = "illumos", target_os = "macos", target_os = "ios", windows)))]
             compile_error!("#[ctor] is not supported on the current target");
 
             // This is mutable, but only by this macro code!
@@ -234,6 +235,7 @@
             #[allow(non_upper_case_globals)]
             #[cfg_attr(any(target_os = "linux", target_os = "android"), link_section = ".init_array")]
             #[cfg_attr(target_os = "freebsd", link_section = ".init_array")]
+            #[cfg_attr(target_os = "dragonfly", link_section = ".init_array")]
             #[cfg_attr(target_os = "netbsd", link_section = ".init_array")]
             #[cfg_attr(target_os = "openbsd", link_section = ".init_array")]
             #[cfg_attr(target_os = "illumos", link_section = ".init_array")]
@@ -305,7 +307,7 @@
             .expect("Unable to create identifier");
 
     let output = quote!(
-        #[cfg(not(any(target_os = "linux", target_os = "android", target_os = "freebsd", target_os = "netbsd", target_os = "openbsd", target_os = "illumos", target_os = "macos", target_os = "ios", windows)))]
+        #[cfg(not(any(target_os = "linux", target_os = "android", target_os = "freebsd", target_os = "dragonfly", target_os = "netbsd", target_os = "openbsd", target_os = "illumos", target_os = "macos", target_os = "ios", windows)))]
         compile_error!("#[dtor] is not supported on the current target");
 
         #(#attrs)*
@@ -328,6 +330,7 @@
             #[allow(non_upper_case_globals)]
             #[cfg_attr(any(target_os = "linux", target_os = "android"), link_section = ".init_array")]
             #[cfg_attr(target_os = "freebsd", link_section = ".init_array")]
+            #[cfg_attr(target_os = "dragonfly", link_section = ".init_array")]
             #[cfg_attr(target_os = "netbsd", link_section = ".init_array")]
             #[cfg_attr(target_os = "openbsd", link_section = ".init_array")]
             #[cfg_attr(target_os = "illumos", link_section = ".init_array")]
