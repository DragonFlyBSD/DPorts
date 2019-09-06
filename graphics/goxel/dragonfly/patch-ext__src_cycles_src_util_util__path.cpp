--- ext_src/cycles/src/util/util_path.cpp.intermediate	2019-09-05 12:13:48.000000000 +0000
+++ ext_src/cycles/src/util/util_path.cpp
@@ -38,7 +38,7 @@
 #  include <shlwapi.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 
@@ -72,7 +72,7 @@ static string this_program_path()
 	// According to MSDN...
 	unsigned int size = sizeof(filename);
 	int r = GetModuleFileName (NULL, filename, size);
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	int mib[4];
 	mib[0] = CTL_KERN;
 	mib[1] = KERN_PROC;
