--- cargo-crates/linkme-impl-0.3.35/src/declaration.rs.orig
+++ cargo-crates/linkme-impl-0.3.35/src/declaration.rs
@@ -143,6 +143,7 @@
                 target_os = "fuchsia",
                 target_os = "illumos",
                 target_os = "freebsd",
+                target_os = "dragonfly",
                 target_os = "openbsd",
                 target_os = "psp",
             ))]
@@ -150,25 +151,25 @@
                 #[cfg_attr(any(target_os = "none", target_os = "linux", target_os = "android", target_os = "fuchsia", target_os = "psp"), link_name = #linux_section_start)]
                 #[cfg_attr(any(target_os = "macos", target_os = "ios", target_os = "tvos"), link_name = #macho_section_start)]
                 #[cfg_attr(target_os = "illumos", link_name = #illumos_section_start)]
-                #[cfg_attr(any(target_os = "freebsd", target_os = "openbsd"), link_name = #bsd_section_start)]
+                #[cfg_attr(any(target_os = "freebsd", target_os = "dragonfly", target_os = "openbsd"), link_name = #bsd_section_start)]
                 static LINKME_START: [<#ty as #linkme_path::#private::Slice>::Element; 0];
 
                 #[cfg_attr(any(target_os = "none", target_os = "linux", target_os = "android", target_os = "fuchsia", target_os = "psp"), link_name = #linux_section_stop)]
                 #[cfg_attr(any(target_os = "macos", target_os = "ios", target_os = "tvos"), link_name = #macho_section_stop)]
                 #[cfg_attr(target_os = "illumos", link_name = #illumos_section_stop)]
-                #[cfg_attr(any(target_os = "freebsd", target_os = "openbsd"), link_name = #bsd_section_stop)]
+                #[cfg_attr(any(target_os = "freebsd", target_os = "dragonfly", target_os = "openbsd"), link_name = #bsd_section_stop)]
                 static LINKME_STOP: [<#ty as #linkme_path::#private::Slice>::Element; 0];
 
                 #[cfg_attr(any(target_os = "none", target_os = "linux", target_os = "android", target_os = "fuchsia", target_os = "psp"), link_name = #linux_dupcheck_start)]
                 #[cfg_attr(any(target_os = "macos", target_os = "ios", target_os = "tvos"), link_name = #macho_dupcheck_start)]
                 #[cfg_attr(target_os = "illumos", link_name = #illumos_dupcheck_start)]
-                #[cfg_attr(any(target_os = "freebsd", target_os = "openbsd"), link_name = #bsd_dupcheck_start)]
+                #[cfg_attr(any(target_os = "freebsd", target_os = "dragonfly", target_os = "openbsd"), link_name = #bsd_dupcheck_start)]
                 static DUPCHECK_START: ();
 
                 #[cfg_attr(any(target_os = "none", target_os = "linux", target_os = "android", target_os = "fuchsia", target_os = "psp"), link_name = #linux_dupcheck_stop)]
                 #[cfg_attr(any(target_os = "macos", target_os = "ios", target_os = "tvos"), link_name = #macho_dupcheck_stop)]
                 #[cfg_attr(target_os = "illumos", link_name = #illumos_dupcheck_stop)]
-                #[cfg_attr(any(target_os = "freebsd", target_os = "openbsd"), link_name = #bsd_dupcheck_stop)]
+                #[cfg_attr(any(target_os = "freebsd", target_os = "dragonfly", target_os = "openbsd"), link_name = #bsd_dupcheck_stop)]
                 static DUPCHECK_STOP: ();
             }
 
@@ -196,12 +197,13 @@
                 target_os = "fuchsia",
                 target_os = "illumos",
                 target_os = "freebsd",
+                target_os = "dragonfly",
                 target_os = "openbsd",
                 target_os = "psp",
             ))]
             #[cfg_attr(any(target_os = "none", target_os = "linux", target_os = "android", target_os = "fuchsia", target_os = "psp"), #unsafe_attr(#link_section_attr = #linux_section))]
             #[cfg_attr(target_os = "illumos", #unsafe_attr(#link_section_attr = #illumos_section))]
-            #[cfg_attr(any(target_os = "freebsd", target_os = "openbsd"), #unsafe_attr(#link_section_attr = #bsd_section))]
+            #[cfg_attr(any(target_os = "freebsd", target_os = "dragonfly", target_os = "openbsd"), #unsafe_attr(#link_section_attr = #bsd_section))]
             static mut LINKME_PLEASE: [<#ty as #linkme_path::#private::Slice>::Element; 0] = [];
 
             #used
@@ -209,7 +211,7 @@
             #[cfg_attr(any(target_os = "macos", target_os = "ios", target_os = "tvos"), #unsafe_attr(#link_section_attr = #macho_dupcheck))]
             #[cfg_attr(any(target_os = "uefi", target_os = "windows"), #unsafe_attr(#link_section_attr = #windows_dupcheck))]
             #[cfg_attr(target_os = "illumos", #unsafe_attr(#link_section_attr = #illumos_dupcheck))]
-            #[cfg_attr(any(target_os = "freebsd", target_os = "openbsd"), #unsafe_attr(#link_section_attr = #bsd_dupcheck))]
+            #[cfg_attr(any(target_os = "freebsd", target_os = "dragonfly", target_os = "openbsd"), #unsafe_attr(#link_section_attr = #bsd_dupcheck))]
             static DUPCHECK: #linkme_path::#private::isize = 1;
 
             #[cfg(not(any(
@@ -224,6 +226,7 @@
                 target_os = "fuchsia",
                 target_os = "illumos",
                 target_os = "freebsd",
+                target_os = "dragonfly",
                 target_os = "openbsd",
                 target_os = "psp",
             )))]
@@ -283,7 +286,7 @@
                 #[cfg_attr(any(target_os = "macos", target_os = "ios", target_os = "tvos"), #unsafe_attr(#link_section_attr = $macho_section))]
                 #[cfg_attr(any(target_os = "uefi", target_os = "windows"), #unsafe_attr(#link_section_attr = $windows_section))]
                 #[cfg_attr(target_os = "illumos", #unsafe_attr(#link_section_attr = $illumos_section))]
-                #[cfg_attr(any(target_os = "freebsd", target_os = "openbsd"), #unsafe_attr(#link_section_attr = $bsd_section))]
+                #[cfg_attr(any(target_os = "freebsd", target_os = "dragonfly", target_os = "openbsd"), #unsafe_attr(#link_section_attr = $bsd_section))]
                 $item
             };
         }
