--- src/tools/getrss.c.intermediate	2021-12-21 05:57:32.000000000 +0000
+++ src/tools/getrss.c
@@ -13,7 +13,7 @@
 #include <unistd.h>
 #include <sys/resource.h>
 #include <mach/mach.h>
-#elif defined(__linux__) || defined(__linux) || defined(linux) || defined(__gnu_linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__linux) || defined(linux) || defined(__gnu_linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <unistd.h>
 #include <sys/resource.h>
 #include <stdio.h>
