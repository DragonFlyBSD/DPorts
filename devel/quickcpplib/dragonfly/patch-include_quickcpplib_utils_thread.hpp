--- include/quickcpplib/utils/thread.hpp.orig
+++ include/quickcpplib/utils/thread.hpp
@@ -37,7 +37,7 @@
 #include <mach/mach_port.h>  // for mach_port_deallocate
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>  // for pthread_getthreadid_np
 #endif
 
