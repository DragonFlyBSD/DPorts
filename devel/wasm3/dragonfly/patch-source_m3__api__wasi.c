--- source/m3_api_wasi.c.orig	2021-06-02 10:40:14 UTC
+++ source/m3_api_wasi.c
@@ -679,7 +679,7 @@ m3ApiRawFunction(m3_wasi_generic_random_
 #   else
         retlen = getentropy(buf, reqlen) < 0 ? -1 : reqlen;
 #   endif
-#elif defined(__FreeBSD__) || defined(__linux__)
+#elif defined(__FreeBSD__) || defined(__linux__) || defined(__DragonFly__)
         retlen = getrandom(buf, buf_len, 0);
 #elif defined(_WIN32)
         if (RtlGenRandom(buf, buf_len) == TRUE) {
