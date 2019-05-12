--- src/diag.cpp.intermediate	2015-05-10 21:35:22 UTC
+++ src/diag.cpp
@@ -74,6 +74,8 @@ void command_diag (Database& config, con
                "OpenBSD"
 #elif defined (FREEBSD)
                "FreeBSD"
+#elif defined (DRAGONFLY)
+               "DragonFly BSD"
 #elif defined (NETBSD)
                "NetBSD"
 #elif defined (LINUX)
