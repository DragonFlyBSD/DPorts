--- JuceLibraryCode/modules/juce_core/native/juce_SystemStats_linux.cpp.orig	2026-03-16 17:51:52 UTC
+++ JuceLibraryCode/modules/juce_core/native/juce_SystemStats_linux.cpp
@@ -20,6 +20,10 @@
   ==============================================================================
 */
 
+#if JUCE_BSD
+#include <sys/user.h>
+#endif
+
 #if JUCE_BELA
 extern "C" int cobalt_thread_mode();
 #endif
@@ -56,7 +60,11 @@ String SystemStats::getOperatingSystemName()
 
 String SystemStats::getOperatingSystemName()
 {
+#ifdef __FreeBSD__
+    return "FreeBSD";
+#else
     return "Linux";
+#endif
 }
 
 bool SystemStats::isOperatingSystem64Bit()
@@ -318,18 +326,17 @@ String SystemStats::getUniqueDeviceID()
             return {};
         };
 
-        auto data = call ("cat /sys/class/dmi/id/board_serial");
+        auto data = call ("kenv smbios.planar.serial");
 
         // 'board_serial' is enough on its own, fallback to bios stuff if we can't find it.
         if (data.isEmpty())
         {
-            data = call ("cat /sys/class/dmi/id/bios_date")
-                 + call ("cat /sys/class/dmi/id/bios_release")
-                 + call ("cat /sys/class/dmi/id/bios_vendor")
-                 + call ("cat /sys/class/dmi/id/bios_version");
+            data = call ("kenv smbios.bios.reldate")
+                 + call ("kenv smbios.bios.vendor")
+                 + call ("kenv smbios.bios.version");
         }
 
-        auto cpuData = call ("lscpu");
+        auto cpuData = String {};
 
         if (cpuData.isNotEmpty())
         {
