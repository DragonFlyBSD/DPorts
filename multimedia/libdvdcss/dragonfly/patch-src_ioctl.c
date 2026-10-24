--- src/ioctl.c.orig
+++ src/ioctl.c
@@ -1080,6 +1080,9 @@
     if (i_ret == 0)
         memcpy(p_buffer, dvd.buffer, sizeof(dvd.bufferLength));
 
+#elif defined( __DragonFly__ )
+    /* No SCSI pass-through for the CPRM commands. */
+    i_ret = -1;
 #else
 #   error "DVD ioctls are unavailable on this system"
 
@@ -1182,6 +1185,9 @@
     }
     return i_ret;
 
+#elif defined( __DragonFly__ )
+    /* No SCSI pass-through for the CPRM commands. */
+    i_ret = -1;
 #else
 #   error "DVD ioctls are unavailable on this system"
 
