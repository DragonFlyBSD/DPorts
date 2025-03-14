diff --git base/compiler_specific.h base/compiler_specific.h
index a804c3a47e7b..fa944c05976e 100644
--- base/compiler_specific.h
+++ base/compiler_specific.h
@@ -326,7 +326,7 @@
 //
 // In some cases it's desirable to remove this, e.g. on hot functions, or if
 // we have purposely changed the reference canary.
-#if (defined(COMPILER_GCC) || defined(__clang__)) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if (defined(COMPILER_GCC) || defined(__clang__)) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #if HAS_ATTRIBUTE(__no_stack_protector__)
 #define NO_STACK_PROTECTOR __attribute__((__no_stack_protector__))
 #else
