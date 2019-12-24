--- rabit/include/rabit/internal/utils.h.intermediate	2019-12-24 17:51:26.000000000 +0000
+++ rabit/include/rabit/internal/utils.h
@@ -19,7 +19,7 @@
 #include <cstdarg>
 #endif  // RABIT_STRICT_CXX98_
 
-#if !defined(__GNUC__) || defined(__FreeBSD__)
+#if !defined(__GNUC__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopen64 std::fopen
 #endif  // !defined(__GNUC__) || defined(__FreeBSD__)
 
