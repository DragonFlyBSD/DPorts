--- deps/openssl/config/opensslconf.h.orig	2015-09-23 03:32:14.000000000 +0300
+++ deps/openssl/config/opensslconf.h
@@ -110,7 +110,7 @@
 # include "./archs/VC-WIN64A/opensslconf.h"
 #elif (defined(__FreeBSD__) || defined(__OpenBSD__)) && defined(__i386__)
 # include "./archs/BSD-x86/opensslconf.h"
-#elif (defined(__FreeBSD__) || defined(__OpenBSD__)) && defined(__x86_64__)
+#elif (defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)) && defined(__x86_64__)
 # include "./archs/BSD-x86_64/opensslconf.h"
 #elif defined(__sun) && defined(__i386__)
 # include "./archs/solaris-x86-gcc/opensslconf.h"
