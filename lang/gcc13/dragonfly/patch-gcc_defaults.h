--- gcc/defaults.h.orig	2025-07-17 13:46:51.752276000 +0200
+++ gcc/defaults.h	2025-07-17 13:47:05.242546000 +0200
@@ -1444,7 +1444,7 @@ see the files COPYING3 and COPYING.RUNTI
 /* When generating dwarf info, the default standard version we'll honor
    and advertise in absence of -gdwarf-<N> on the command line.  */
 #ifndef DWARF_VERSION_DEFAULT
-#define DWARF_VERSION_DEFAULT 5
+#define DWARF_VERSION_DEFAULT 4
 #endif
 
 #ifndef USED_FOR_TARGET
