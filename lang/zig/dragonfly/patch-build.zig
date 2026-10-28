--- build.zig.orig
+++ build.zig
@@ -875,7 +875,14 @@
                 try addCxxKnownPath(b, cfg, exe, b.fmt("libc++.{s}", .{target.dynamicLibSuffix()[1..]}), null, need_cpp_includes);
                 try addCxxKnownPath(b, cfg, exe, b.fmt("libc++abi.{s}", .{target.dynamicLibSuffix()[1..]}), null, need_cpp_includes);
             },
-            .netbsd, .dragonfly => {
+            .dragonfly => {
+                // DragonFly's LLVM is built against libc++, which devel/libcxx<v>
+                // installs into the LLVM lib dir as a linker script.
+                exe.allow_so_scripts = true;
+                mod.addObjectFile(.{ .cwd_relative = b.pathJoin(&.{ cfg.llvm_lib_dir, b.fmt("libc++.{s}", .{lib_suffix}) }) });
+                if (static) mod.addObjectFile(.{ .cwd_relative = b.pathJoin(&.{ cfg.llvm_lib_dir, b.fmt("libc++abi.{s}", .{lib_suffix}) }) });
+            },
+            .netbsd => {
                 try addCxxKnownPath(b, cfg, exe, b.fmt("libstdc++.{s}", .{lib_suffix}), null, need_cpp_includes);
                 if (static) try addCxxKnownPath(b, cfg, exe, b.fmt("libgcc_eh.{s}", .{lib_suffix}), null, need_cpp_includes);
             },
