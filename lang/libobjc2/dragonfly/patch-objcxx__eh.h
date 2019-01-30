--- objcxx_eh.h.orig	2015-08-07 11:33:41 UTC
+++ objcxx_eh.h
@@ -5,8 +5,18 @@ extern "C" {
  * Allocates a C++ exception.  This function is part of the Itanium C++ ABI and
  * is provided externally.
  */
+/*
+ * Note: Recent versions of libsupc++ already provide a prototype for
+ * __cxa__allocate_exception(). Since the libsupc++ version is defined with
+ * _GLIBCXX_NOTHROW, clang gives a type mismatch error.
+ */
+#ifndef __cplusplus
+#undef CXA_ALLOCATE_EXCEPTION_SPECIFIER
+#define CXA_ALLOCATE_EXCEPTION_SPECIFIER
+#endif
 __attribute__((weak))
-void *__cxa_allocate_exception(size_t thrown_size);
+void *__cxa_allocate_exception(size_t thrown_size) CXA_ALLOCATE_EXCEPTION_SPECIFIER;
+
 /**
  * Initialises an exception object returned by __cxa_allocate_exception() for
  * storing an Objective-C object.  The return value is the location of the
