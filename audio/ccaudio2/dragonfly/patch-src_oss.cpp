--- src/oss.cpp.intermediate	2020-11-22 11:59:21.000000000 +0000
+++ src/oss.cpp
@@ -32,10 +32,12 @@ int _oss_ccaudio_dummy = 0;
 #include <sys/soundcard.h>
 #ifdef  HAVE_ENDIAN_H
 #include <sys/endian.h>
+#ifndef __BYTE_ORDER
 #define __LITTLE_ENDIAN (_BYTE_ORDER == _LITTLE_ENDIAN)
 #define __BIG_ENDIAN    (_BYTE_ORDER == _BIG_ENDIAN)
 #define __BYTE_ORDER _BYTE_ORDER
 #endif
+#endif
 
 #include <ucommon/export.h>
 #include <ccaudio2.h>
