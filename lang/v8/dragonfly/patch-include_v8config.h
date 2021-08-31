--- include/v8config.h.orig	2021-08-30 19:19:59 UTC
+++ include/v8config.h
@@ -116,6 +116,7 @@ path. Add it with -I<path> to the comman
 # define V8_OS_POSIX 1
 #elif defined(__DragonFly__)
 # define V8_OS_BSD 1
+# define V8_OS_FREEBSD 1
 # define V8_OS_DRAGONFLYBSD 1
 # define V8_OS_POSIX 1
 #elif defined(__NetBSD__)
@@ -473,11 +474,7 @@ path. Add it with -I<path> to the comman
 // or apply to just one constructor like:
 //   V8_NODISCARD Foo() { ... };
 // [[nodiscard]] comes in C++17 but supported in clang with -std >= c++11.
-#if V8_HAS_CPP_ATTRIBUTE_NODISCARD
-#define V8_NODISCARD [[nodiscard]]
-#else
 #define V8_NODISCARD /* NOT SUPPORTED */
-#endif
 
 // Helper macro to define no_sanitize attributes only with clang.
 #if defined(__clang__) && defined(__has_attribute)
