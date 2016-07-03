--- src/string_s.h	2014-02-01 02:12:40.000000000 +0200
+++ src/string_s.h	2016-06-29 17:40:46.000000000 +0300
@@ -77,7 +77,7 @@ const char *strerror_x(int x);
  typedef int errno_t;
 errno_t fopen_s(FILE **fp, const char *filename, const char *mode);
 
-#elif defined(__GNUC__) && (__GNUC__ == 4)
+#elif defined(__GNUC__) && ((__GNUC__ == 4) || (__GNUC__ == 5))
 #include <inttypes.h>
 /* GCC 4 */
 # define sprintf_s      snprintf
