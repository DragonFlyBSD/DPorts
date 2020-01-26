--- kernel/log.cc.orig	2019-08-26 08:37:53 UTC
+++ kernel/log.cc
@@ -25,7 +25,7 @@
 #  include <sys/time.h>
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <dlfcn.h>
 #endif
 
@@ -420,7 +420,7 @@ void log_pop()
 	log_flush();
 }
 
-#if (defined(__linux__) || defined(__FreeBSD__)) && defined(YOSYS_ENABLE_PLUGINS)
+#if (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)) && defined(YOSYS_ENABLE_PLUGINS)
 void log_backtrace(const char *prefix, int levels)
 {
 	if (levels <= 0) return;
@@ -615,7 +615,7 @@ void log_wire(RTLIL::Wire *wire, std::st
 // ---------------------------------------------------
 // This is the magic behind the code coverage counters
 // ---------------------------------------------------
-#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__))
+#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__))
 
 dict<std::string, std::pair<std::string, int>> extra_coverage_data;
 
