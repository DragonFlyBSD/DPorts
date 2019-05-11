--- src/madness/world/thread.cc.intermediate	2019-05-11 08:25:08.000000000 +0000
+++ src/madness/world/thread.cc
@@ -45,7 +45,9 @@
 #include <cstring>
 #include <fstream>
 #include <sys/param.h>
+#ifdef __FreeBSD__
 #include <sys/cpuset.h>
+#endif
 
 #if defined(HAVE_IBMBGQ) and defined(HPM)
 extern "C" unsigned int HPM_Prof_init_thread(void);
