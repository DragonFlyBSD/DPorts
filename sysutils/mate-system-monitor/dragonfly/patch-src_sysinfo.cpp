--- src/sysinfo.cpp.orig	2019-04-24 15:41:49 UTC
+++ src/sysinfo.cpp
@@ -280,7 +280,9 @@ namespace {
 
             for (guint i = 0; i != mountlist.number; ++i) {
                 if ((string(entries[i].mountdir).compare("/") == 0) && \
-                    (string(entries[i].type).compare("zfs") == 0)) {
+                    ((string(entries[i].type).compare("zfs") == 0) || \
+                    (string(entries[i].type).compare("hammer") == 0) ||
+                    (string(entries[i].type).compare("hammer2") == 0))) {
                     // Root filesystem is ZFS based: Calculate usage based on "/".
                     glibtop_fsusage usage;
                     glibtop_get_fsusage(&usage, "/");
