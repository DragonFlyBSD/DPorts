--- src/bootstrap/native.rs.orig	2017-10-09 20:04:51 UTC
+++ src/bootstrap/native.rs
@@ -418,6 +418,7 @@ impl Step for Openssl {
             "x86_64-apple-darwin" => "darwin64-x86_64-cc",
             "x86_64-linux-android" => "linux-x86_64",
             "x86_64-unknown-freebsd" => "BSD-x86_64",
+            "x86_64-unknown-dragonfly" => "BSD-x86_64",
             "x86_64-unknown-linux-gnu" => "linux-x86_64",
             "x86_64-unknown-linux-musl" => "linux-x86_64",
             "x86_64-unknown-netbsd" => "BSD-x86_64",
