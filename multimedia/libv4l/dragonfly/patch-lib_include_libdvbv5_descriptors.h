--- lib/include/libdvbv5/descriptors.h.intermediate	2020-08-16 06:52:13.000000000 +0000
+++ lib/include/libdvbv5/descriptors.h
@@ -87,7 +87,7 @@ typedef void (*dvb_table_init_func)(stru
 extern const dvb_table_init_func dvb_table_initializers[256];
 
 #ifndef _DOXYGEN
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #define bswap16(b) do {\
