--- deps/v8/src/base/platform/platform-freebsd.cc.intermediate	2020-02-18 00:10:03 UTC
+++ deps/v8/src/base/platform/platform-freebsd.cc
@@ -48,6 +48,7 @@ static unsigned StringToLong(char* buffe
 
 std::vector<OS::SharedLibraryAddress> OS::GetSharedLibraryAddresses() {
   std::vector<SharedLibraryAddress> result;
+#ifndef __DragonFly__
   int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_VMMAP, getpid()};
   size_t miblen = sizeof(mib) / sizeof(mib[0]);
   size_t buffer_size;
@@ -89,6 +90,7 @@ std::vector<OS::SharedLibraryAddress> OS
       }
     }
   }
+#endif
   return result;
 }
 
