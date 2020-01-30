--- mysys/stacktrace.cc.orig	2019-12-09 19:53:17 UTC
+++ mysys/stacktrace.cc
@@ -65,10 +65,12 @@
 #include <execinfo.h>
 #endif
 
+#ifndef __DragonFly__
 #ifdef __FreeBSD__
 #define UNW_LOCAL_ONLY
 #include <libunwind.h>
 #endif
+#endif
 
 #ifdef __linux__
 /* __bss_start doesn't seem to work on FreeBSD and doesn't exist on OSX/Solaris.
@@ -261,7 +263,7 @@ static void my_demangle_symbols(char **a
 #endif /* HAVE_ABI_CXA_DEMANGLE */
 
 void my_print_stacktrace(const uchar *stack_bottom, ulong thread_stack) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
   static char procname_buffer[2048];
   unw_cursor_t cursor;
   unw_context_t uc;
