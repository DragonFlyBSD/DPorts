--- contrib/gomni.c.orig	2008-08-07 00:02:13 UTC
+++ contrib/gomni.c
@@ -672,11 +672,15 @@ SetupDevice (gx_device *pgxdev, gs_param
    static char             cOmnilib[]         = "libomni.so";
    static char             cDialogName[]      = "libomnijobdialog.so";
    static const char      *apszLibraryPaths[] = {
+#ifdef __DragonFly__
+      "/usr/local/lib/ghostscript/",
+#else
 #if __WORDSIZE == 64
       "/usr/lib64/ghostscript/",
 #else
       "/usr/lib/ghostscript/",
 #endif
+#endif
       "/usr/lib/Omni/",
       "/opt/Omni/bin/",
       "/opt/Omni/lib/",
