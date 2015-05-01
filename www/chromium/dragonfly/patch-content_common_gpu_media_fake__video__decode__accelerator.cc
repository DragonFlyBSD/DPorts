--- content/common/gpu/media/fake_video_decode_accelerator.cc.orig	2015-04-14 22:18:53 UTC
+++ content/common/gpu/media/fake_video_decode_accelerator.cc
@@ -2,6 +2,9 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#define __STDC_LIMIT_MACROS
+#include <stdint.h>
+
 #include "content/common/gpu/media/fake_video_decode_accelerator.h"
 
 #include "base/bind.h"
