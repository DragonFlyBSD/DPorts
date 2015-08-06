--- device/usb/usb_device_handle_impl.cc.orig	2015-08-06 07:14:42 UTC
+++ device/usb/usb_device_handle_impl.cc
@@ -2,6 +2,8 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#define __STDC_LIMIT_MACROS
+#include <stdint.h>
 #include "device/usb/usb_device_handle_impl.h"
 
 #include <algorithm>
