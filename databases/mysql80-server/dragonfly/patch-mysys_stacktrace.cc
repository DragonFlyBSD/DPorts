--- mysys/stacktrace.cc.orig	2019-06-25 10:23:30 UTC
+++ mysys/stacktrace.cc
@@ -64,10 +64,12 @@
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
@@ -260,7 +262,7 @@ static void my_demangle_symbols(char **a
 #endif /* HAVE_ABI_CXA_DEMANGLE */
 
 void my_print_stacktrace(uchar *stack_bottom, ulong thread_stack) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
   static char procname_buffer[2048];
   unw_cursor_t cursor;
   unw_context_t uc;
