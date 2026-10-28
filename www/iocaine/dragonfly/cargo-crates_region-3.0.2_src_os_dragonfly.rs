--- cargo-crates/region-3.0.2/src/os/dragonfly.rs.orig
+++ cargo-crates/region-3.0.2/src/os/dragonfly.rs
@@ -0,0 +1,63 @@
+use crate::{Error, Protection, Region, Result};
+use std::fs;
+
+// DragonFly has no kinfo_getvmmap(3), so read the procfs map instead (as the
+// Linux backend does with /proc/self/maps). This needs procfs on /proc.
+pub struct QueryIter {
+  proc_map: String,
+  upper_bound: usize,
+  offset: usize,
+}
+
+impl QueryIter {
+  pub fn new(origin: *const (), size: usize) -> Result<Self> {
+    // Read the whole file at once for a consistent snapshot.
+    let proc_map = fs::read_to_string("/proc/curproc/map").map_err(Error::SystemCall)?;
+
+    Ok(Self {
+      proc_map,
+      upper_bound: (origin as usize).saturating_add(size),
+      offset: 0,
+    })
+  }
+
+  pub fn upper_bound(&self) -> usize {
+    self.upper_bound
+  }
+}
+
+impl Iterator for QueryIter {
+  type Item = Result<Region>;
+
+  fn next(&mut self) -> Option<Self::Item> {
+    let (line, _) = self.proc_map.get(self.offset..)?.split_once('\n')?;
+    self.offset += line.len() + 1;
+
+    Some(parse_procfs_line(line).ok_or_else(|| Error::ProcfsInput(line.to_string())))
+  }
+}
+
+/// Parses a line from /proc/curproc/map, e.g.
+/// "0x400000 0x402000 -1 -1 0xfffff806baeaec80 r-x 2 0 0x0000 COW NC vnode /usr/bin/head".
+fn parse_procfs_line(input: &str) -> Option<Region> {
+  const MAPPINGS: &[Protection] = &[Protection::READ, Protection::WRITE, Protection::EXECUTE];
+
+  let parts: Vec<&str> = input.split_whitespace().collect();
+  let hex = |value: &str| usize::from_str_radix(value.trim_start_matches("0x"), 16).ok();
+  let (lower, upper) = (hex(parts.first()?)?, hex(parts.get(1)?)?);
+
+  let protection = parts
+    .get(5)?
+    .chars()
+    .zip(MAPPINGS.iter())
+    .filter(|(c, _)| *c != '-')
+    .fold(Protection::NONE, |acc, (_, prot)| acc | *prot);
+
+  Some(Region {
+    base: lower as *const _,
+    protection,
+    shared: *parts.get(9)? == "NCOW",
+    size: upper - lower,
+    ..Region::default()
+  })
+}
