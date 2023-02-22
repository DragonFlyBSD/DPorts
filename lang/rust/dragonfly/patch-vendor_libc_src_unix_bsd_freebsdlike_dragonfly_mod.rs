--- vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2022-09-19 15:35:02 UTC
+++ vendor/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -1488,6 +1488,10 @@ f! {
             _CMSG_ALIGN(length as usize)) as ::c_uint
     }
 
+    pub fn cpu_setsize(cpumask: &mut cpumask_t) -> ::c_int {
+        (::mem::size_of::<cpumask_t>() * 8) as ::c_int
+    }
+
     pub fn CPU_ZERO(cpuset: &mut cpu_set_t) -> () {
         for slot in cpuset.ary.iter_mut() {
             *slot = 0;
