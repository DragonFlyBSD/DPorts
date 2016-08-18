--- media/gpu/fake_video_decode_accelerator.cc.orig	2016-08-03 22:02:20.000000000 +0300
+++ media/gpu/fake_video_decode_accelerator.cc
@@ -2,6 +2,9 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#define __STDC_LIMIT_MACROS
+#include <stdint.h>
+
 #include "media/gpu/fake_video_decode_accelerator.h"
 
 #include <stddef.h>
