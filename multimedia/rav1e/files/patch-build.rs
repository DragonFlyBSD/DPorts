error: failed to run custom build command for `rav1e v0.4.0 (/wrkdirs/usr/ports/multimedia/librav1e/work/rav1e-0.4.0)`

Caused by:
  process didn't exit successfully: `/wrkdirs/usr/ports/multimedia/librav1e/work/target/release/build/rav1e-b2f4b3ce116fbed0/build-script-build` (exit code: 101)
  --- stderr
  thread 'main' panicked at 'called `Result::unwrap()` on an `Err` value: LlvmVersionError(TooManyComponents)', build.rs:179:16
  stack backtrace:
     0: rust_begin_unwind
     1: core::panicking::panic_fmt
     2: core::result::unwrap_failed
     3: core::result::Result<T,E>::unwrap
               at /wrkdirs/usr/ports/lang/rust/work/rustc-1.51.0-src/library/core/src/result.rs:1037:23
     4: build_script_build::rustc_version_check
               at ./build.rs:179:6
     5: build_script_build::main
               at ./build.rs:268:3
     6: core::ops::function::FnOnce::call_once
               at /wrkdirs/usr/ports/lang/rust/work/rustc-1.51.0-src/library/core/src/ops/function.rs:227:5
  note: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.

--- build.rs.orig	2022-11-30 13:32:16 UTC
+++ build.rs
@@ -221,17 +221,6 @@ fn rustc_version_check() {
 }
 
 fn rustc_version_check() {
-  // This should match the version in the CI
-  // Make sure to updated README.md when this changes.
-  const REQUIRED_VERSION: &str = "1.60.0";
-  if version().unwrap() < Version::parse(REQUIRED_VERSION).unwrap() {
-    eprintln!("rav1e requires rustc >= {}.", REQUIRED_VERSION);
-    exit(1);
-  }
-
-  if version_meta().unwrap().channel == Channel::Nightly {
-    println!("cargo:rustc-cfg=nightly_rustc");
-  }
 }
 
 #[allow(unused_variables)]
