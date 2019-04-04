--- src/util.cc.intermediate	2019-04-04 07:18:30 UTC
+++ src/util.cc
@@ -29,7 +29,7 @@
 #elif defined(__APPLE__)
 #  include <mach-o/dyld.h>
 #  include <unistd.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/param.h>
 #  include <sys/sysctl.h>
 #  include <unistd.h>   // TODO 180528: remove this
@@ -140,7 +140,7 @@ std::string proc_self_dirname()
                 buflen--;
         return std::string(path, buflen);
 }
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 std::string proc_self_dirname()
 {
         char path[PATH_MAX];
