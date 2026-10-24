--- include/gnokii.h.orig
+++ include/gnokii.h
@@ -42,7 +42,7 @@
 #if defined(__linux__) || defined(__GLIBC__) || defined(__CYGWIN__)
 #  include <stdint.h>
 #  include <sys/time.h>
-#elif defined(__svr4__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__MACH__)
+#elif defined(__svr4__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__MACH__)
 #  include <inttypes.h>
 #  include <sys/time.h>
 #elif defined(_MSC_VER) && defined(WIN32)
