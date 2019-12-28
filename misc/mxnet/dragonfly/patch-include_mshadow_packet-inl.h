--- include/mshadow/packet-inl.h.intermediate	2019-12-24 17:38:52.000000000 +0000
+++ include/mshadow/packet-inl.h
@@ -6,7 +6,7 @@
 #ifndef MSHADOW_PACKET_INL_H_
 #define MSHADOW_PACKET_INL_H_
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
