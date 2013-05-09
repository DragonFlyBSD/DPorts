--- UnAlz.cpp.orig	2009-04-01 06:00:27.000000000 +0000
+++ UnAlz.cpp
@@ -455,7 +455,7 @@ BOOL CUnAlz::ReadLocalFileheader()
 	size_t size;
 	char inbuf[ICONV_BUF_SIZE];
 	char outbuf[ICONV_BUF_SIZE];
-#if defined(__FreeBSD__) || defined(__CYGWIN__) ||  defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) ||  defined(__NetBSD__)
 	const char *inptr = inbuf;
 #else
 	char *inptr = inbuf;
@@ -1907,7 +1907,11 @@ void CUnAlz::DecryptingData(int nSize, B
 ////////////////////////////////////////////////////////////////////////////////////////////////////
 UINT32 CUnAlz::CRC32(UINT32 l, BYTE c)
 {
+#ifdef __DragonFly__
+	const z_crc_t *CRC_TABLE = get_crc_table();
+#else
 	const unsigned long *CRC_TABLE = get_crc_table();
+#endif
 	return CRC_TABLE[(l ^ c) & 0xff] ^ (l >> 8);
 }
 
