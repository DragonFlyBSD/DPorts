--- kernel/driver.cc.orig	2021-12-03 11:48:49 UTC
+++ kernel/driver.cc
@@ -34,13 +34,13 @@
 #include <limits.h>
 #include <errno.h>
 
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
@@ -602,11 +602,11 @@ int main(int argc, char **argv)
 			ru_buffer.ru_utime.tv_usec += ru_buffer_children.ru_utime.tv_usec;
 			ru_buffer.ru_stime.tv_sec += ru_buffer_children.ru_stime.tv_sec;
 			ru_buffer.ru_stime.tv_usec += ru_buffer_children.ru_stime.tv_usec;
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 			ru_buffer.ru_maxrss = std::max(ru_buffer.ru_maxrss, ru_buffer_children.ru_maxrss);
 #endif
 		}
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 		meminfo = stringf(", MEM: %.2f MB peak",
 				ru_buffer.ru_maxrss / 1024.0);
 #endif
@@ -649,7 +649,7 @@ int main(int argc, char **argv)
 		}
 	}
 
-#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__))
+#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__))
 	if (getenv("YOSYS_COVER_DIR") || getenv("YOSYS_COVER_FILE"))
 	{
 		string filename;
