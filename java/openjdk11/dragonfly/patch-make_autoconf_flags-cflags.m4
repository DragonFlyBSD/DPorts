--- make/autoconf/flags-cflags.m4.ori	2024-12-09 20:34:06.403758000 +0100
+++ make/autoconf/flags-cflags.m4	2024-12-09 20:36:14.285988000 +0100
@@ -42,7 +42,7 @@ AC_DEFUN([FLAGS_SETUP_SHARED_LIBS],
     # --disable-new-dtags forces use of RPATH instead of RUNPATH for rpaths.
     # This protects internal library dependencies within the JDK from being
     # overridden using LD_LIBRARY_PATH. See JDK-8326891 for more information.
-    SET_EXECUTABLE_ORIGIN='-Wl,-rpath,\$$ORIGIN[$]1 -Wl,--disable-new-dtags'
+    SET_EXECUTABLE_ORIGIN='-Wl,-z,origin -Wl,-rpath,\$$ORIGIN[$]1  -Wl,--disable-new-dtags'
     SET_SHARED_LIBRARY_ORIGIN="-Wl,-z,origin $SET_EXECUTABLE_ORIGIN"
     SET_SHARED_LIBRARY_NAME='-Wl,-soname=[$]1'
     SET_SHARED_LIBRARY_MAPFILE='-Wl,-version-script=[$]1'
