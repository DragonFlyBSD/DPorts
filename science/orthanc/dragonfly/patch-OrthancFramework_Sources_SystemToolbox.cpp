--- OrthancFramework/Sources/SystemToolbox.cpp.orig	2021-11-14 15:10:37.975019000 +0100
+++ OrthancFramework/Sources/SystemToolbox.cpp	2021-11-14 15:12:04.713088000 +0100
@@ -46,14 +46,14 @@
 #endif
 
 
-#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <net/if_dl.h>     // For GetMacAddresses()
 #  include <net/if_types.h>  // For GetMacAddresses()
 #  include <sys/sysctl.h>    // For GetMacAddresses()
 #endif
 
 
-#if defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <limits.h>        // PATH_MAX
 #  include <signal.h>
 #  include <unistd.h>
@@ -200,7 +200,7 @@
   {
 #if defined(_WIN32)
     ::Sleep(static_cast<DWORD>(microSeconds / static_cast<uint64_t>(1000)));
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__native_client__)
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__native_client__) || defined(__DragonFly__)
     usleep(microSeconds);
 #else
 #error Support your platform here
@@ -488,7 +488,7 @@
     return std::string(&buffer[0]);
   }
 
-#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
   static std::string GetPathToExecutableInternal()
   {
     // NOTE: For FreeBSD, using KERN_PROC_PATHNAME might be a better alternative
@@ -1082,7 +1082,7 @@
 
       while (!interfaces.IsDone())
       {
-#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
         int mib[6];
         mib[0] = CTL_NET;
         mib[1] = AF_ROUTE;
