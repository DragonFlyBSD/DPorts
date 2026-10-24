diff --git v8/src/base/platform/platform-freebsd.cc v8/src/base/platform/platform-freebsd.cc
index d80926acab0a..5e8b5bb7055b 100644
--- v8/src/base/platform/platform-freebsd.cc
+++ v8/src/base/platform/platform-freebsd.cc
@@ -45,6 +45,7 @@ TimezoneCache* OS::CreateTimezoneCache() {
 
 std::vector<OS::SharedLibraryAddress> OS::GetSharedLibraryAddresses() {
   std::vector<SharedLibraryAddress> result;
+#ifndef __DragonFly__
   int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_VMMAP, getpid()};
   unsigned int miblen = sizeof(mib) / sizeof(mib[0]);
   size_t buffer_size;
@@ -91,6 +92,7 @@ std::vector<OS::SharedLibraryAddress> OS::GetSharedLibraryAddresses() {
       }
     }
   }
+#endif
   return result;
 }
 
