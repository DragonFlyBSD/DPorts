--- gegl/gegl-config.c.orig	2021-12-18 23:49:45 UTC
+++ gegl/gegl-config.c
@@ -44,7 +44,7 @@
 #include <mach/mach.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -285,6 +285,21 @@ gegl_config_class_init (GeglConfigClass
                              ) * page_size;
       mach_port_deallocate (mach_task_self (), host);
     }
+#elif defined(__DragonFly__)
+
+    int64_t usermem, free_pages, inact;
+    size_t len = sizeof usermem;
+
+    if(sysctlbyname("hw.usermem", &usermem, &len, NULL, 0)) {
+      mem_total = usermem;
+    };
+
+    if(sysctlbyname("vm.stats.vm.v_free_count", &free_pages, &len, NULL, 0)) {
+	if(sysctlbyname("vm.stats.vm.v_inactive_count", &inact, &len, NULL, 0)) {
+	    mem_available = (free_pages + inact) * sysconf (_SC_PAGESIZE);
+	}
+    };
+
 #elif defined(__FreeBSD__)
     bool ok = true;
 
