--- kernel/driver.cc.orig	2026-10-23 00:00:00 UTC
+++ kernel/driver.cc
@@ -53,13 +53,13 @@
 #endif
 #include <inttypes.h>
 
-#if defined (__linux__) || defined(__FreeBSD__)
+#if defined (__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/resource.h>
 #  include <sys/types.h>
 #  include <unistd.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/sysctl.h>
 #  include <sys/user.h>
 #endif
@@ -636,11 +636,11 @@
 			ru_buffer.ru_utime.tv_usec += ru_buffer_children.ru_utime.tv_usec;
 			ru_buffer.ru_stime.tv_sec += ru_buffer_children.ru_stime.tv_sec;
 			ru_buffer.ru_stime.tv_usec += ru_buffer_children.ru_stime.tv_usec;
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 			ru_buffer.ru_maxrss = std::max(ru_buffer.ru_maxrss, ru_buffer_children.ru_maxrss);
 #endif
 		}
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 		meminfo = stringf(", MEM: %.2f MB peak",
 				ru_buffer.ru_maxrss / 1024.0);
 #elif defined(__APPLE__)
