--- src/third_party/mozjs-45/platform/x86_64/dragonfly/build/Unified_cpp_js_src21.cpp.orig	2019-02-01 00:41:50 UTC
+++ src/third_party/mozjs-45/platform/x86_64/dragonfly/build/Unified_cpp_js_src21.cpp
@@ -0,0 +1,55 @@
+#define MOZ_UNIFIED_BUILD
+#include "jit/x86-shared/BaselineIC-x86-shared.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x86-shared/BaselineIC-x86-shared.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x86-shared/BaselineIC-x86-shared.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x86-shared/CodeGenerator-x86-shared.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x86-shared/CodeGenerator-x86-shared.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x86-shared/CodeGenerator-x86-shared.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x86-shared/Lowering-x86-shared.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x86-shared/Lowering-x86-shared.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x86-shared/Lowering-x86-shared.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x86-shared/MacroAssembler-x86-shared.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x86-shared/MacroAssembler-x86-shared.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x86-shared/MacroAssembler-x86-shared.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jit/x86-shared/MoveEmitter-x86-shared.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jit/x86-shared/MoveEmitter-x86-shared.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jit/x86-shared/MoveEmitter-x86-shared.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "jsalloc.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "jsalloc.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "jsalloc.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
