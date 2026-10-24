--- compiler/rustc_codegen_ssa/src/back/link.rs.orig
+++ compiler/rustc_codegen_ssa/src/back/link.rs
@@ -2978,8 +2978,11 @@
         // as it appears to be unused. This can then cause the PGO profile file to lose
         // some functions. If we are generating a profile we shouldn't strip those metadata
         // sections to ensure we have all the data for PGO.
-        let keep_metadata =
-            crate_type == CrateType::Dylib || sess.opts.cg.profile_generate.enabled();
+        // DragonFly base binutils does not retain `#[used]` proc-macro rlib sections
+        // under `--gc-sections`, so keep the linked metadata there as well.
+        let keep_metadata = crate_type == CrateType::Dylib
+            || (crate_type == CrateType::ProcMacro && sess.target.os == Os::Dragonfly)
+            || sess.opts.cg.profile_generate.enabled();
         cmd.gc_sections(keep_metadata);
     }
 
