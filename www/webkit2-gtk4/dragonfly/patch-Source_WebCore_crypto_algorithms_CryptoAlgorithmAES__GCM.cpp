--- Source/WebCore/crypto/algorithms/CryptoAlgorithmAES_GCM.cpp.orig	2019-02-12 11:21:18 UTC
+++ Source/WebCore/crypto/algorithms/CryptoAlgorithmAES_GCM.cpp
@@ -33,6 +33,12 @@
 #include "CryptoKeyAES.h"
 #include <wtf/CrossThreadCopier.h>
 
+#ifndef __WORDSIZE
+#ifdef __DragonFly__
+#define __WORDSIZE 64
+#endif
+#endif
+
 namespace WebCore {
 
 namespace CryptoAlgorithmAES_GCMInternal {
