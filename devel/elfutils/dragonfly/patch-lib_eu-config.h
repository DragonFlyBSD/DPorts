--- lib/eu-config.h.intermediate	2020-01-05 17:11:19.000000000 +0000
+++ lib/eu-config.h
@@ -192,6 +192,7 @@ struct obstack;
 extern int obstack_printf(struct obstack *, const char *, ...);
 extern int obstack_vprintf(struct obstack *, const char *, va_list);
 
+#ifndef __DragonFly__
 #pragma GCC diagnostic push
 #pragma GCC diagnostic ignored "-Wshadow"
 static inline void *
@@ -208,6 +209,7 @@ wmempcpy(wchar_t * restrict dst, const w
 	return (wmemcpy(dst, src, len) + len);
 }
 #pragma GCC diagnostic pop
+#endif
 
 static inline void *
 rawmemchr(const void *s, int c)
@@ -296,7 +298,9 @@ eu_basename(const char *path)
 #define	mmap64	mmap
 #define	lseek64	lseek
 
+#ifdef __FreeBSD__
 #define	MAP_POPULATE	MAP_PREFAULT_READ
+#endif
 
 #define	bswap_16	bswap16
 #define	bswap_32	bswap32
