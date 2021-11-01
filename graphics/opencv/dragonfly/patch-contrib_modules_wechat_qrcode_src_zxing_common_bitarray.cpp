--- contrib/modules/wechat_qrcode/src/zxing/common/bitarray.cpp.orig	2021-10-30 18:33:29.519065000 +0200
+++ contrib/modules/wechat_qrcode/src/zxing/common/bitarray.cpp	2021-10-30 18:33:37.208892000 +0200
@@ -15,11 +15,11 @@
 using zxing::ErrorHandler;
 using zxing::Ref;
 
-#if __WORDSIZE == 64
-// typedef long int int64_t;
-#else
-typedef long long int int64_t;
-#endif
+//#if __WORDSIZE == 64
+//// typedef long int int64_t;
+//#else
+//typedef long long int int64_t;
+//#endif
 
 BitArray::BitArray(int size_) : size(size_), bits(size_), nextSets(size_), nextUnSets(size_) {}
 
