--- src/egl/main/eglglobals.c.orig	2026-07-02 19:34:59 UTC
+++ src/egl/main/eglglobals.c
@@ -134,6 +134,14 @@ _eglPointerIsDereferenceable(void *p)
    if (p == NULL)
       return EGL_FALSE;

+   /* DragonFly mincore() can report success for low unmapped addresses.
+    * Treat the first page as non-dereferenceable so tagged integer values,
+    * such as wl_egl_window version 3, cannot be mistaken for legacy
+    * wl_surface pointers.
+    */
+   if (addr < page_size)
+      return EGL_FALSE;
+
    /* align addr to page_size */
    addr &= ~(page_size - 1);
