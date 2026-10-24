--- src/ducc0/nufft/nufft_common.h.orig	2022-11-09 12:37:21 UTC
+++ src/ducc0/nufft/nufft_common.h
@@ -21,6 +21,7 @@
 #define DUCC0_NUFFT_COMMON_H
 
 #include <algorithm>
+#include <cstring>
 #include "ducc0/infra/simd.h"
 #include "ducc0/math/gridding_kernel.h"
 #include "ducc0/fft/fft.h"
