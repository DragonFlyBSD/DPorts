--- compiler/rustc_codegen_ssa/src/back/linker.rs.orig
+++ compiler/rustc_codegen_ssa/src/back/linker.rs
@@ -886,7 +886,10 @@
             } else {
                 let mut arg = OsString::from("--version-script=");
                 arg.push(path);
-                self.link_arg(arg).link_arg("--no-undefined-version");
+                self.link_arg(arg);
+                if self.sess.target.os != Os::Dragonfly {
+                    self.link_arg("--no-undefined-version");
+                }
             }
         }
     }
