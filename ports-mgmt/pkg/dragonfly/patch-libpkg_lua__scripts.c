--- libpkg/lua_scripts.c.orig	2020-02-21 06:18:42.000000000 -0800
+++ libpkg/lua_scripts.c	2020-03-18 16:02:24.255923000 -0700
@@ -38,6 +38,11 @@
 #include <sys/types.h>
 #include <sys/wait.h>
 
+#ifdef __DragonFly__
+#include <sys/types.h>
+#include <sys/wait.h>
+#endif
+
 #include <errno.h>
 #include <poll.h>
 #include <utstring.h>
@@ -314,6 +319,8 @@
 			if (getline(&line, &linecap, f) > 0) {
 				pkg_emit_message(line);
 			}
+			if (feof(f))
+				break;
 		}
 		fclose(f);
 
