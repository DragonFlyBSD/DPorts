--- src/3rdparty/chromium/v8/src/base/platform/platform-freebsd.cc.intermediate	2021-02-02 16:48:13 UTC
+++ src/3rdparty/chromium/v8/src/base/platform/platform-freebsd.cc
@@ -49,6 +49,7 @@ static unsigned StringToLong(char* buffe
 
 std::vector<OS::SharedLibraryAddress> OS::GetSharedLibraryAddresses() {
   std::vector<SharedLibraryAddress> result;
+#ifndef __DragonFly__
   int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_VMMAP, getpid()};
   size_t miblen = sizeof(mib) / sizeof(mib[0]);
   size_t buffer_size;
@@ -90,6 +91,7 @@ std::vector<OS::SharedLibraryAddress> OS
       }
     }
   }
+#endif
   return result;
 }
 
