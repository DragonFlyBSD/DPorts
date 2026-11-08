File::lock and friends: DragonFly has flock(2). Unsupported here made cargo
skip its build-directory lock, so concurrent cargo runs raced.

--- library/std/src/sys/fs/unix.rs.orig
+++ library/std/src/sys/fs/unix.rs
@@ -1468,6 +1468,7 @@
     pub fn lock(&self) -> io::Result<()> {
         cfg_select! {
             any(
+                target_os = "dragonfly",
                 target_os = "freebsd",
                 target_os = "fuchsia",
                 target_os = "hurd",
@@ -1492,6 +1493,7 @@
     pub fn lock_shared(&self) -> io::Result<()> {
         cfg_select! {
             any(
+                target_os = "dragonfly",
                 target_os = "freebsd",
                 target_os = "fuchsia",
                 target_os = "hurd",
@@ -1516,6 +1518,7 @@
     pub fn try_lock(&self) -> Result<(), TryLockError> {
         cfg_select! {
             any(
+                target_os = "dragonfly",
                 target_os = "freebsd",
                 target_os = "fuchsia",
                 target_os = "hurd",
@@ -1551,6 +1554,7 @@
     pub fn try_lock_shared(&self) -> Result<(), TryLockError> {
         cfg_select! {
                 any(
+                target_os = "dragonfly",
                 target_os = "freebsd",
                 target_os = "fuchsia",
                 target_os = "hurd",
@@ -1586,6 +1590,7 @@
     pub fn unlock(&self) -> io::Result<()> {
         cfg_select! {
             any(
+                target_os = "dragonfly",
                 target_os = "freebsd",
                 target_os = "fuchsia",
                 target_os = "hurd",
