--- unix/povconfig/syspovconfig_bsd.h.orig	2026-11-06 07:07:56 UTC
+++ unix/povconfig/syspovconfig_bsd.h
@@ -77,5 +77,7 @@
 #endif
 
 #define POV_ULONG unsigned POV_LONG
+#define MACHINE_INTRINSICS_H <x86intrin.h>
+#define ALIGN32 __attribute__ ((aligned(32)))
 
 #endif // POVRAY_UNIX_SYSPOVCONFIG_BSD_H
