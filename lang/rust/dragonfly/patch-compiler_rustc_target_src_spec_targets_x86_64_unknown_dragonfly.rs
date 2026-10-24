--- compiler/rustc_target/src/spec/targets/x86_64_unknown_dragonfly.rs.orig
+++ compiler/rustc_target/src/spec/targets/x86_64_unknown_dragonfly.rs
@@ -5,7 +5,7 @@
     base.cpu = "x86-64".into();
     base.plt_by_default = false;
     base.max_atomic_width = Some(64);
-    base.add_pre_link_args(LinkerFlavor::Gnu(Cc::Yes, Lld::No), &["-m64"]);
+    base.add_pre_link_args(LinkerFlavor::Gnu(Cc::Yes, Lld::No), &["-m64", "-fuse-ld=bfd"]);
     base.stack_probes = StackProbeType::Inline;
 
     Target {
