--- modules/codec/opus_header.h.ori	Thu Feb 27 10:33:59 2025
+++ modules/codec/opus_header.h	Thu Feb 27 10:43:45 2025
@@ -29,6 +29,7 @@
 #define OPUS_HEADER_H
 
 #include <stdint.h>
+#include <stddef.h>
 
 typedef struct {
     int version;
