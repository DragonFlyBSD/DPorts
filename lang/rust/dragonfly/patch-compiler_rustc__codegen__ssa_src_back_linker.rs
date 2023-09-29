--- compiler/rustc_codegen_ssa/src/back/linker.rs.orig	2023-05-31 19:28:10 UTC
+++ compiler/rustc_codegen_ssa/src/back/linker.rs
@@ -10,6 +10,7 @@ use std::io::{self, BufWriter};
 use std::path::{Path, PathBuf};
 use std::{env, mem, str};
 
+use rustc_data_structures::fx::FxHashSet;
 use rustc_hir::def_id::{CrateNum, LOCAL_CRATE};
 use rustc_metadata::find_native_static_library;
 use rustc_middle::middle::dependency_format::Linkage;
@@ -700,9 +701,15 @@ impl<'a> Linker for GccLinker<'a> {
                 writeln!(f, "{{")?;
                 if !symbols.is_empty() {
                     writeln!(f, "  global:")?;
+                    let mut known_syms = FxHashSet::default();
                     for sym in symbols {
-                        debug!("    {};", sym);
-                        writeln!(f, "    {};", sym)?;
+                        if known_syms.contains(sym) {
+                            eprintln!("Warning, duplicate sym: {}", sym);
+                        } else {
+                            debug!("    {};", sym);
+                            writeln!(f, "    {};", sym)?;
+                            known_syms.insert(sym);
+                        }
                     }
                 }
                 writeln!(f, "\n  local:\n    *;\n}};")?;
