--- external/src/blosc/shuffle.cc.intermediate	2020-09-25 09:59:09 UTC
+++ external/src/blosc/shuffle.cc
@@ -159,7 +159,7 @@ __cpuidex(int32_t cpuInfo[4], int32_t fu
    https://software.intel.com/en-us/articles/how-to-detect-new-instruction-support-in-the-4th-generation-intel-core-processor-family
 */
 
-#if defined(__clang_major__) && __clang_major__ < 9
+#if (defined(__clang_major__) && __clang_major__ < 9) || __GNUC__ < 9
 static inline uint64_t
 _xgetbv(uint32_t xcr) {
   uint32_t eax, edx;
