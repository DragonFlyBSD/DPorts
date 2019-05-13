--- libopenage/error/handlers.cpp.orig	2018-07-03 16:23:39 UTC
+++ libopenage/error/handlers.cpp
@@ -44,7 +44,7 @@ namespace {
 bool exit_ok;
 
 std::terminate_handler old_terminate_handler;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 typedef sig_t sighandler_t;
 #endif
 sighandler_t old_sigsegv_handler;
