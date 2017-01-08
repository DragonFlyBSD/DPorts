--- src/stackwalk.c.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/stackwalk.c
@@ -9,6 +9,37 @@
 #include "julia_internal.h"
 #include "threading.h"
 
+#ifdef __DragonFly__
+#include <stdio.h>
+/* write and publish proper codes and these will not be needed */
+//for looking up functions from gdb:
+void jl_gdblookup(uintptr_t ip)
+{
+  printf("meow!");
+}
+
+void jlbacktrace(void)
+{
+  uintptr_t a;
+  jl_gdblookup(a);
+}
+
+size_t rec_backtrace_ctx(uintptr_t *data, size_t maxsize,
+                         bt_context_t *context)
+{
+    /* n == 1 works best */
+    return 1;
+}
+
+size_t rec_backtrace(uintptr_t *data, size_t maxsize)
+{
+    bt_context_t context;
+    memset(&context, 0, sizeof(context));
+    return rec_backtrace_ctx(data, maxsize, &context);
+}
+
+#else
+
 // define `jl_unw_get` as a macro, since (like setjmp)
 // returning from the callee function will invalidate the context
 #ifdef _OS_WINDOWS_
@@ -424,3 +455,5 @@ JL_DLLEXPORT void jlbacktrace(void)
 #ifdef __cplusplus
 }
 #endif
+
+#endif /* !__DragonFly__ */
