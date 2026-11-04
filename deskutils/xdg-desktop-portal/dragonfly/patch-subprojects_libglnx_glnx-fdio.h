--- subprojects/libglnx/glnx-fdio.h.orig
+++ subprojects/libglnx/glnx-fdio.h
@@ -234,6 +234,11 @@
   if (size == 0)
     return TRUE;
 
+#ifdef __DragonFly__
+  /* No fallocate() here; preallocating is only an optimisation. */
+  (void) fd;
+  (void) offset;
+#else
   if (fallocate (fd, 0, offset, size) < 0)
     {
       if (G_IN_SET(errno, ENOSYS, EOPNOTSUPP))
@@ -241,6 +246,7 @@
       else
         return glnx_throw_errno_prefix (error, "fallocate");
     }
+#endif
 
   return TRUE;
 }
