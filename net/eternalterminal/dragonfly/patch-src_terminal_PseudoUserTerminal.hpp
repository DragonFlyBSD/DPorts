--- src/terminal/PseudoUserTerminal.hpp.orig
+++ src/terminal/PseudoUserTerminal.hpp
@@ -9,7 +9,7 @@
 #if __APPLE__
 #include <sys/ucred.h>
 #include <util.h>
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 #include <libutil.h>
 #elif __NetBSD__  // do not need pty.h on NetBSD
 #else
