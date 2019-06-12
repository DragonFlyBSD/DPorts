--- contrib/gomni.c.orig	2012-08-08 08:01:36 UTC
+++ contrib/gomni.c
@@ -699,11 +699,15 @@ SetupDevice (gx_device *pgxdev, gs_param
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
