--- Source/JavaScriptCore/runtime/TypeProfiler.h.orig	2015-05-20 15:25:35 UTC
+++ Source/JavaScriptCore/runtime/TypeProfiler.h
@@ -26,6 +26,15 @@
 #ifndef TypeProfiler_h
 #define TypeProfiler_h
 
+/* Hack for DFLY 4.2 and earlier */
+#ifndef UINT_MAX
+#define UINT_MAX	0xffffffffU
+#endif
+#ifndef INTPTR_MAX
+#define INTPTR_MAX	0x7fffffffffffffffL
+#define UINTPTR_MAX	0xffffffffffffffffUL
+#endif
+
 #include "CodeBlock.h"
 #include "TypeLocation.h"
 #include "TypeLocationCache.h"
