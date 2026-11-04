--- lib/std/c.zig.orig
+++ lib/std/c.zig
@@ -5741,6 +5741,22 @@ pub const MSG = switch (native_os) {
         pub const WAITFORONE = 0x1000;
         pub const CMSG_CLOFORK = 0x2000;
     },
+    .dragonfly => struct {
+        pub const OOB = 0x0001;
+        pub const PEEK = 0x0002;
+        pub const DONTROUTE = 0x0004;
+        pub const EOR = 0x0008;
+        pub const TRUNC = 0x0010;
+        pub const CTRUNC = 0x0020;
+        pub const WAITALL = 0x0040;
+        pub const DONTWAIT = 0x0080;
+        pub const NOSIGNAL = 0x0400;
+        pub const SYNC = 0x0800;
+        pub const CMSG_CLOEXEC = 0x1000;
+        pub const CMSG_CLOFORK = 0x2000;
+        pub const FBLOCKING = 0x10000;
+        pub const FNONBLOCKING = 0x20000;
+    },
     else => void,
 };
 pub const SOCK = switch (native_os) {
