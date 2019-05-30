--- gegl/gegl-config.c.orig	2019-05-30 09:46:01 UTC
+++ gegl/gegl-config.c
@@ -271,6 +271,21 @@ gegl_config_class_init (GeglConfigClass
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
 
     size_t len = sizeof(unsigned int);
