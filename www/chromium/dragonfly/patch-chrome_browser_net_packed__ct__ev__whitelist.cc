--- chrome/browser/net/packed_ct_ev_whitelist.cc.orig	2015-02-20 04:36:42 UTC
+++ chrome/browser/net/packed_ct_ev_whitelist.cc
@@ -2,6 +2,9 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#define __STDC_LIMIT_MACROS
+#include <stdint.h>
+
 #include "chrome/browser/net/packed_ct_ev_whitelist.h"
 
 #include <string.h>
