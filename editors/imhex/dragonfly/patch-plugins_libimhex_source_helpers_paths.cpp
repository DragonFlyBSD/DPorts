--- plugins/libimhex/source/helpers/paths.cpp.intermediate	2021-12-20 07:44:48.000000000 +0000
+++ plugins/libimhex/source/helpers/paths.cpp
@@ -6,7 +6,7 @@
     #include <shlobj.h>
 #elif defined(OS_LINUX)
     #include <xdg.hpp>
-# if defined(__FreeBSD__)
+# if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/syslimits.h>
 # else
     #include <linux/limits.h>
@@ -120,4 +120,4 @@ namespace hex {
         #endif
     }
 
-}
\ No newline at end of file
+}
