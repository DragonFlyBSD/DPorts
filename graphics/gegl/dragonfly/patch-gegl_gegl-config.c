--- gegl/gegl-config.c.orig	2019-05-22 13:05:36 UTC
+++ gegl/gegl-config.c
@@ -271,7 +271,7 @@ gegl_config_class_init (GeglConfigClass
                              ) * page_size;
       mach_port_deallocate (mach_task_self (), host);
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
     size_t len = sizeof(unsigned int);
     unsigned int realmem, physmem;
