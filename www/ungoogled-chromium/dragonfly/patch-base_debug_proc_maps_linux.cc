diff --git base/debug/proc_maps_linux.cc base/debug/proc_maps_linux.cc
index 607e2d36c889..1154890760de 100644
--- base/debug/proc_maps_linux.cc
+++ base/debug/proc_maps_linux.cc
@@ -124,9 +124,16 @@ bool ParseProcMaps(const std::string& input,
     // The final %n term captures the offset in the input string, which is used
     // to determine the path name. It *does not* increment the return value.
     // Refer to man 3 sscanf for details.
+#if defined(OS_BSD) && defined(_tuxillo_later)
+    if (sscanf(line, "%p %p %d %d %p %s %d %d 0x%04x %s %s %s %n",
+       &region.start, &region.end, &resident, &privateresident, &obj,
+       permissions, &ref_count, &shadow_count, &flags, e_eflags1,
+       e_eflags2, type, &path_index) < 12) {
+#else
     if (sscanf(line, "%" SCNxPTR "-%" SCNxPTR " %4c %llx %hhx:%hhx %ld %n",
                &region.start, &region.end, permissions, &region.offset,
                &dev_major, &dev_minor, &inode, &path_index) < 7) {
+#endif
       DPLOG(WARNING) << "sscanf failed for line: " << line;
       return false;
     }
