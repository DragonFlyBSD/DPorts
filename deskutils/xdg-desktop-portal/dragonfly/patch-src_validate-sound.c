--- src/validate-sound.c.orig
+++ src/validate-sound.c
@@ -65,7 +65,11 @@
       return 1;
     }
 
+#ifdef __DragonFly__
+  uri = g_strdup_printf ("file:///dev/fd/%d", input_fd);
+#else
   uri = g_strdup_printf ("file:///proc/self/fd/%d", input_fd);
+#endif
   info = gst_discoverer_discover_uri (discoverer, uri, &error);
   result = gst_discoverer_info_get_result (info);
 
