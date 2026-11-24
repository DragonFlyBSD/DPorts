--- src/base/Headers.hpp.orig
+++ src/base/Headers.hpp
@@ -22,7 +22,7 @@
 #if __APPLE__
 #include <sys/ucred.h>
 #include <util.h>
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 #include <libutil.h>
 #include <sys/socket.h>
 #elif __NetBSD__  // do not need pty.h on NetBSD
