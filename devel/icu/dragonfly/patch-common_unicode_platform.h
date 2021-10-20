--- common/unicode/platform.h.intermediate	2018-02-26 15:38:13 UTC
+++ common/unicode/platform.h
@@ -165,8 +165,8 @@
 #   else
 #       define U_PLATFORM U_PF_DARWIN
 #   endif
-#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__)
-#   if defined(__FreeBSD__)
+#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__) || defined(__DragonFly__)
+#   if defined(__FreeBSD__) || defined(__DragonFly__)
 #       include <sys/endian.h>
 #   endif
 #   define U_PLATFORM U_PF_BSD
@@ -491,10 +491,14 @@
 #   define U_CPLUSPLUS_VERSION 1
 #endif
 
-#if (U_PLATFORM == U_PF_AIX || U_PLATFORM == U_PF_OS390) && defined(__cplusplus) &&(U_CPLUSPLUS_VERSION < 11)
+#if defined(__cplusplus) && (U_CPLUSPLUS_VERSION < 11)
 // add in std::nullptr_t
 namespace std {
+#if (U_PLATFORM == U_PF_AIX || U_PLATFORM == U_PF_OS390)
   typedef decltype(nullptr) nullptr_t;
+#elif defined(__GNUC__) && !defined(__clang__)
+  typedef __decltype(__null) nullptr_t;
+#endif
 };
 #endif
 
