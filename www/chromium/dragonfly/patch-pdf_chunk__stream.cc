--- pdf/chunk_stream.cc.orig	2015-02-20 04:24:01 UTC
+++ pdf/chunk_stream.cc
@@ -2,7 +2,6 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
-#include "pdf/chunk_stream.h"
 
 #define __STDC_LIMIT_MACROS
 #ifdef _WIN32
@@ -13,6 +12,7 @@
 
 #include <algorithm>
 
+#include "pdf/chunk_stream.h"
 #include "base/basictypes.h"
 
 namespace chrome_pdf {
