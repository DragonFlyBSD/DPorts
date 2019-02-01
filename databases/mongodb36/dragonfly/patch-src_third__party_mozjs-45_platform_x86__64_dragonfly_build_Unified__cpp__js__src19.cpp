--- src/third_party/mozjs-45/platform/x86_64/dragonfly/build/Unified_cpp_js_src19.cpp.orig	2019-02-01 00:41:50 UTC
+++ src/third_party/mozjs-45/platform/x86_64/dragonfly/build/Unified_cpp_js_src19.cpp
@@ -0,0 +1,55 @@
+#define MOZ_UNIFIED_BUILD
+#include "jit/x64/Bailouts-x64.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x64/Bailouts-x64.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x64/Bailouts-x64.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x64/BaselineCompiler-x64.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x64/BaselineCompiler-x64.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x64/BaselineCompiler-x64.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x64/BaselineIC-x64.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x64/BaselineIC-x64.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x64/BaselineIC-x64.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x64/CodeGenerator-x64.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x64/CodeGenerator-x64.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x64/CodeGenerator-x64.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x64/Lowering-x64.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x64/Lowering-x64.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x64/Lowering-x64.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x64/MacroAssembler-x64.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x64/MacroAssembler-x64.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x64/MacroAssembler-x64.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
