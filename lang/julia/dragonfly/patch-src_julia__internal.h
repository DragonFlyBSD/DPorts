--- src/julia_internal.h.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/julia_internal.h
@@ -464,6 +464,12 @@ typedef struct {
 #endif
 extern volatile int jl_in_stackwalk;
 #else
+
+#ifdef __DragonFly__
+/* go away or implement without this */
+typedef double bt_context_t;
+typedef double bt_cursor_t;
+#else
 // This gives unwind only local unwinding options ==> faster code
 #  define UNW_LOCAL_ONLY
 #  include <libunwind.h>
@@ -476,6 +482,8 @@ typedef unw_cursor_t bt_cursor_t;
 #    define JL_UNW_HAS_FORMAT_IP 1
 #  endif
 #endif
+#endif /* !__DragonFly__ */
+
 size_t rec_backtrace(uintptr_t *data, size_t maxsize);
 size_t rec_backtrace_ctx(uintptr_t *data, size_t maxsize, bt_context_t *ctx);
 #ifdef LIBOSXUNWIND
