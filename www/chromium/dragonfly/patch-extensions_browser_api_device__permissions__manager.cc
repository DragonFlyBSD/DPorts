--- extensions/browser/api/device_permissions_manager.cc.orig	2015-02-20 04:36:43 UTC
+++ extensions/browser/api/device_permissions_manager.cc
@@ -2,6 +2,8 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#define __STDC_LIMIT_MACROS
+#include <stdint.h>
 #include "extensions/browser/api/device_permissions_manager.h"
 
 #include "base/memory/singleton.h"
