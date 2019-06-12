--- cargo-crates/termios-0.2.2/src/lib.rs.orig	2016-01-20 16:52:20 UTC
+++ cargo-crates/termios-0.2.2/src/lib.rs
@@ -89,6 +89,11 @@
 //!     cfsetspeed(termios, termios::os::macos::B230400)
 //! }
 //!
+//! #[cfg(target_os = "dragonfly")]
+//! fn set_fastest_speed(termios: &mut Termios) -> io::Result<()> {
+//!     cfsetspeed(termios, termios::os::dragonfly::B921600)
+//! }
+//!
 //! #[cfg(target_os = "freebsd")]
 //! fn set_fastest_speed(termios: &mut Termios) -> io::Result<()> {
 //!     cfsetspeed(termios, termios::os::freebsd::B921600)
