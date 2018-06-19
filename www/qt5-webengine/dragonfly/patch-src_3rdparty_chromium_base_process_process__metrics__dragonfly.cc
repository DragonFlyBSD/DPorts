--- src/3rdparty/chromium/base/process/process_metrics_dragonfly.cc.orig	2018-05-25 19:39:59 UTC
+++ src/3rdparty/chromium/base/process/process_metrics_dragonfly.cc
@@ -0,0 +1,147 @@
+// Copyright (c) 2013 The Chromium Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.
+
+#include "base/process/process_metrics.h"
+
+#include <stddef.h>
+#include <sys/sysctl.h>
+#include <sys/user.h>
+#include <unistd.h>
+
+#include "base/macros.h"
+#include "base/memory/ptr_util.h"
+#include "base/sys_info.h"
+
+#include <unistd.h> /* getpagesize() */
+#include <fcntl.h>  /* O_RDONLY */
+
+namespace base {
+
+ProcessMetrics::ProcessMetrics(ProcessHandle process)
+    : process_(process),
+      processor_count_(SysInfo::NumberOfProcessors()),
+      last_system_time_(0),
+      last_cpu_(0) {}
+
+// static
+std::unique_ptr<ProcessMetrics> ProcessMetrics::CreateProcessMetrics(
+    ProcessHandle process) {
+  return WrapUnique(new ProcessMetrics(process));
+}
+
+size_t ProcessMetrics::GetPagefileUsage() const {
+  struct kinfo_proc info;
+  int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, process_ };
+  size_t length = sizeof(info);
+
+  if (sysctl(mib, arraysize(mib), &info, &length, NULL, 0) < 0)
+    return 0;
+
+  return info.kp_vm_map_size;
+}
+
+size_t ProcessMetrics::GetPeakPagefileUsage() const {
+  return 0;
+}
+
+size_t ProcessMetrics::GetWorkingSetSize() const {
+  struct kinfo_proc info;
+  int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, process_ };
+  size_t length = sizeof(info);
+
+  if (sysctl(mib, arraysize(mib), &info, &length, NULL, 0) < 0)
+    return 0;
+
+  return info.kp_vm_rssize * getpagesize();
+}
+
+size_t ProcessMetrics::GetPeakWorkingSetSize() const {
+  return 0;
+}
+
+bool ProcessMetrics::GetMemoryBytes(size_t* private_bytes,
+                                    size_t* shared_bytes) {
+  WorkingSetKBytes ws_usage;
+  if (!GetWorkingSetKBytes(&ws_usage))
+    return false;
+
+  if (private_bytes)
+    *private_bytes = ws_usage.priv << 10;
+
+  if (shared_bytes)
+    *shared_bytes = ws_usage.shared * 1024;
+
+  return true;
+}
+
+bool ProcessMetrics::GetWorkingSetKBytes(WorkingSetKBytes* ws_usage) const {
+// TODO(bapt) be sure we can't be precise
+  size_t priv = GetWorkingSetSize();
+  if (!priv)
+    return false;
+  ws_usage->priv = priv / 1024;
+  ws_usage->shareable = 0;
+  ws_usage->shared = 0;
+
+  return true;
+}
+
+double ProcessMetrics::GetCPUUsage() {
+  struct kinfo_proc info;
+  int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, process_ };
+  size_t length = sizeof(info);
+
+  if (sysctl(mib, arraysize(mib), &info, &length, NULL, 0) < 0)
+    return 0;
+
+  return (info.kp_lwp.kl_pctcpu / FSCALE) * 100.0;
+}
+
+bool ProcessMetrics::GetIOCounters(IoCounters* io_counters) const {
+  return false;
+}
+
+size_t GetSystemCommitCharge() {
+  int mib[2], pagesize;
+  unsigned long mem_total, mem_free, mem_inactive;
+  size_t length = sizeof(mem_total);
+
+  if (sysctl(mib, arraysize(mib), &mem_total, &length, NULL, 0) < 0)
+    return 0;
+
+  length = sizeof(mem_free);
+  if (sysctlbyname("vm.stats.vm.v_free_count", &mem_free, &length, NULL, 0) < 0)
+    return 0;
+
+  length = sizeof(mem_inactive);
+  if (sysctlbyname("vm.stats.vm.v_inactive_count", &mem_inactive, &length,
+      NULL, 0) < 0) {
+    return 0;
+  }
+
+  pagesize = getpagesize();
+
+  return mem_total - (mem_free*pagesize) - (mem_inactive*pagesize);
+}
+
+int GetNumberOfThreads(ProcessHandle process) {
+  // Taken from FreeBSD top (usr.bin/top/machine.c)
+
+  kvm_t* kd = kvm_open(NULL, "/dev/null", NULL, O_RDONLY, "kvm_open");
+  if (kd == NULL)
+    return 0;
+
+  struct kinfo_proc* pbase;
+  int nproc;
+  pbase = kvm_getprocs(kd, KERN_PROC_PID, process, &nproc);
+  if (pbase == NULL)
+    return 0;
+
+  if (kvm_close(kd) == -1)
+    return 0;
+
+  return nproc;
+}
+
+}  // namespace base
