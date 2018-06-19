--- src/3rdparty/chromium/base/sys_info_dragonfly.cc.orig	2018-05-25 19:40:46 UTC
+++ src/3rdparty/chromium/base/sys_info_dragonfly.cc
@@ -0,0 +1,70 @@
+// Copyright (c) 2011 The Chromium Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.
+
+#include "base/sys_info.h"
+
+#include <stddef.h>
+#include <stdint.h>
+#include <sys/sysctl.h>
+
+#include "base/logging.h"
+
+namespace base {
+
+int64_t SysInfo::AmountOfAvailablePhysicalMemory() {
+  int page_size, r = 0;
+  unsigned pgfree, pginact, pgcache;
+  size_t size = sizeof(page_size);
+  size_t szpg = sizeof(pgfree);
+  if(r == 0)
+    r = sysctlbyname("vm.stats.vm.v_page_size", &page_size, &size, NULL, 0);
+  if(r == 0)
+    r = sysctlbyname("vm.stats.vm.v_free_count", &pgfree, &szpg, NULL, 0);
+  if(r == 0)
+    r = sysctlbyname("vm.stats.vm.v_inactive_count", &pginact, &szpg, NULL, 0);
+  if(r == 0)
+    r = sysctlbyname("vm.stats.vm.v_cache_count", &pgcache, &szpg, NULL, 0);
+  if (r == -1) {
+    NOTREACHED();
+    return 0;
+  }
+  return static_cast<int64_t>((pgfree + pginact + pgcache) * page_size);
+}
+
+int64_t SysInfo::AmountOfPhysicalMemory() {
+  int pages, page_size, r = 0;
+  size_t size = sizeof(pages);
+  if(r == 0)
+    r = sysctlbyname("vm.stats.vm.v_page_count", &pages, &size, NULL, 0);
+  if(r == 0)
+    r = sysctlbyname("vm.stats.vm.v_page_size", &page_size, &size, NULL, 0);
+  if (r == -1) {
+    NOTREACHED();
+    return 0;
+  }
+  return static_cast<int64_t>(pages) * page_size;
+}
+
+// static
+std::string SysInfo::CPUModelName() {
+  int mib[] = { CTL_HW, HW_MODEL };
+  char name[256];
+  size_t size = arraysize(name);
+  if (sysctl(mib, arraysize(mib), &name, &size, NULL, 0) == 0)
+    return name;
+  return std::string();
+}
+
+int SysInfo::NumberOfProcessors() {
+  int mib[] = { CTL_HW, HW_NCPU };
+  int ncpu;
+  size_t size = sizeof(ncpu);
+  if (sysctl(mib, arraysize(mib), &ncpu, &size, NULL, 0) == -1) {
+    NOTREACHED();
+    return 1;
+  }
+  return ncpu;
+}
+
+}  // namespace base
