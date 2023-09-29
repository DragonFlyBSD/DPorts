diff --git third_party/libFuzzer/src/afl/afl_driver.cpp third_party/libFuzzer/src/afl/afl_driver.cpp
index 52aede7e078..d612a3ca74d 100644
--- third_party/libFuzzer/src/afl/afl_driver.cpp
+++ third_party/libFuzzer/src/afl/afl_driver.cpp
@@ -70,7 +70,7 @@ If 1, close stdout at startup. If 2 close stderr; if 3 close both.
 #define LIBFUZZER_APPLE 0
 #define LIBFUZZER_NETBSD 1
 #define LIBFUZZER_FREEBSD 0
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 #define LIBFUZZER_LINUX 0
 #define LIBFUZZER_APPLE 0
 #define LIBFUZZER_NETBSD 0
