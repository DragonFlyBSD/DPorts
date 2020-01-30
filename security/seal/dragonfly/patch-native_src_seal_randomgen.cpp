--- native/src/seal/randomgen.cpp.intermediate	2020-01-27 16:04:21.000000000 +0000
+++ native/src/seal/randomgen.cpp
@@ -18,7 +18,7 @@ namespace seal
     uint64_t random_uint64()
     {
         uint64_t result;
-#if defined(__linux__) || defined(__FreeBSD__) || (defined(__APPLE__) && defined(__MACH__))
+#if defined(__linux__) || defined(__FreeBSD__) || (defined(__APPLE__) && defined(__MACH__) || defined(__DragonFly__))
         random_device rd("/dev/urandom");
         result = (static_cast<uint64_t>(rd()) << 32)
             + static_cast<uint64_t>(rd());
