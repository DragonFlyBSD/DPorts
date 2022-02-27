--- src/target.rs.intermediate	2022-02-01 06:09:25.000000000 +0000
+++ src/target.rs
@@ -16,6 +16,7 @@ enum Os {
     Linux,
     Windows,
     Macos,
+    DragonFly,
     FreeBsd,
     OpenBsd,
 }
@@ -26,6 +27,7 @@ impl fmt::Display for Os {
             Os::Linux => write!(f, "Linux"),
             Os::Windows => write!(f, "Windows"),
             Os::Macos => write!(f, "MacOS"),
+            Os::DragonFly => write!(f, "DragonFly"),
             Os::FreeBsd => write!(f, "FreeBSD"),
             Os::OpenBsd => write!(f, "OpenBSD"),
         }
@@ -72,6 +74,7 @@ fn get_supported_architectures(os: &Os)
         ],
         Os::Windows => vec![Arch::X86, Arch::X86_64, Arch::Aarch64],
         Os::Macos => vec![Arch::Aarch64, Arch::X86_64],
+        Os::DragonFly => vec![Arch::X86_64],
         Os::FreeBsd => vec![Arch::X86_64, Arch::Aarch64, Arch::Powerpc64, Arch::Powerpc64Le],
         Os::OpenBsd => vec![Arch::X86, Arch::X86_64, Arch::Aarch64],
     }
@@ -110,6 +113,7 @@ impl Target {
             target_lexicon::OperatingSystem::Windows => Os::Windows,
             target_lexicon::OperatingSystem::MacOSX { .. }
             | target_lexicon::OperatingSystem::Darwin => Os::Macos,
+            target_lexicon::OperatingSystem::Dragonfly => Os::DragonFly,
             target_lexicon::OperatingSystem::Freebsd => Os::FreeBsd,
             target_lexicon::OperatingSystem::Openbsd => Os::OpenBsd,
             unsupported => bail!("The operating system {:?} is not supported", unsupported),
@@ -142,6 +146,7 @@ impl Target {
     pub fn get_platform_tag(&self, platform_tag: PlatformTag, universal2: bool) -> String {
         match (&self.os, &self.arch) {
             (Os::FreeBsd, Arch::X86_64)
+            | (Os::DragonFly, Arch::X86_64)
             | (Os::FreeBsd, Arch::Aarch64)
             | (Os::FreeBsd, Arch::Powerpc64)
             | (Os::FreeBsd, Arch::Powerpc64Le)
@@ -204,6 +209,7 @@ impl Target {
             Os::Windows => "windows",
             Os::Linux => "linux",
             Os::Macos => "darwin",
+            Os::DragonFly => "dragonfly",
             Os::FreeBsd => "freebsd",
             Os::OpenBsd => "openbsd",
         }
@@ -241,7 +247,7 @@ impl Target {
     pub fn is_unix(&self) -> bool {
         match self.os {
             Os::Windows => false,
-            Os::Linux | Os::Macos | Os::FreeBsd | Os::OpenBsd => true,
+            Os::Linux | Os::Macos | Os::DragonFly | Os::FreeBsd | Os::OpenBsd => true,
         }
     }
 
@@ -255,6 +261,11 @@ impl Target {
         self.os == Os::Linux
     }
 
+    /// Returns true if the current platform is dragonfly
+    pub fn is_dragonfly(&self) -> bool {
+        self.os == Os::DragonFly
+    }
+
     /// Returns true if the current platform is freebsd
     pub fn is_freebsd(&self) -> bool {
         self.os == Os::FreeBsd
