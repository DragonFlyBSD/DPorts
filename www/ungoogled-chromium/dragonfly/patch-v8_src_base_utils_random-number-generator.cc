diff --git v8/src/base/utils/random-number-generator.cc v8/src/base/utils/random-number-generator.cc
index 91b7c6fc666..49d442235b7 100644
--- v8/src/base/utils/random-number-generator.cc
+++ v8/src/base/utils/random-number-generator.cc
@@ -56,7 +56,7 @@ RandomNumberGenerator::RandomNumberGenerator() {
   DCHECK_EQ(0, result);
   USE(result);
   SetSeed((static_cast<int64_t>(first_half) << 32) + second_half);
-#elif V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
+#elif V8_OS_MACOSX || V8_OS_FREEBSD || V8_OS_OPENBSD || V8_OS_DRAGONFLYBSD
   // Despite its prefix suggests it is not RC4 algorithm anymore.
   // It always succeeds while having decent performance and
   // no file descriptor involved.
