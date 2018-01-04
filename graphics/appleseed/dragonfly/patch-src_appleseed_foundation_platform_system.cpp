--- src/appleseed/foundation/platform/system.cpp.orig	2017-07-27 18:53:21.000000000 +0300
+++ src/appleseed/foundation/platform/system.cpp
@@ -75,7 +75,7 @@
     #include <unistd.h>
 
 // FreeBSD.
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 
     #include <sys/types.h>
     #include <sys/resource.h>
@@ -104,6 +104,9 @@ void System::print_information(Logger& l
         logger,
         "system information:\n"
         "  logical cores                 %s\n"
+#if defined __DragonFly__
+        , pretty_uint(get_logical_cpu_core_count()).c_str());
+#else
         "  L1 data cache                 size %s, line size %s\n"
         "  L2 cache                      size %s, line size %s\n"
         "  L3 cache                      size %s, line size %s\n"
@@ -118,6 +121,7 @@ void System::print_information(Logger& l
         pretty_size(get_l3_cache_line_size()).c_str(),
         pretty_size(get_total_physical_memory_size()).c_str(),
         pretty_size(get_total_virtual_memory_size()).c_str());
+#endif
 }
 
 size_t System::get_logical_cpu_core_count()
@@ -349,6 +353,13 @@ uint64 System::get_process_virtual_memor
     return info.resident_size;
 }
 
+// Quick&dirty DragonFly implementation
+#elif defined __DragonFly__
+size_t System::get_l1_data_cache_line_size()
+{
+    return 64;  // on my ironlake netbook, so should be a safe bet
+}
+
 // ------------------------------------------------------------------------------------------------
 // Linux.
 // ------------------------------------------------------------------------------------------------
