--- lib/CL/pocl_cl.h.orig	2019-04-04 12:07:26 UTC
+++ lib/CL/pocl_cl.h
@@ -1285,7 +1285,7 @@ struct _cl_sampler {
   #define le32toh(x) OSSwapLittleToHostInt32(x)
   #define htole64(x) OSSwapHostToLittleInt64(x)
   #define le64toh(x) OSSwapLittleToHostInt64(x)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #include <sys/endian.h>
 #else
   #include <endian.h>
