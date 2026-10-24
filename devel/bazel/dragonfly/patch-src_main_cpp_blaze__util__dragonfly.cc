--- src/main/cpp/blaze_util_dragonfly.cc.orig	2018-01-29 22:56:11 UTC
+++ src/main/cpp/blaze_util_dragonfly.cc
@@ -0,0 +1,142 @@
+// Copyright 2015 The Bazel Authors. All rights reserved.
+//
+// Licensed under the Apache License, Version 2.0 (the "License");
+// you may not use this file except in compliance with the License.
+// You may obtain a copy of the License at
+//
+//    http://www.apache.org/licenses/LICENSE-2.0
+//
+// Unless required by applicable law or agreed to in writing, software
+// distributed under the License is distributed on an "AS IS" BASIS,
+// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
+// See the License for the specific language governing permissions and
+// limitations under the License.
+
+#include <errno.h>  // errno, ENAMETOOLONG
+#include <limits.h>
+#include <pwd.h>
+#include <signal.h>
+#include <string.h>  // strerror
+#include <sys/mount.h>
+#include <sys/param.h>
+#include <sys/queue.h>
+#include <sys/socket.h>
+#include <sys/sysctl.h>
+#include <sys/types.h>
+#include <sys/un.h>
+#include <unistd.h>
+
+#include "src/main/cpp/blaze_util.h"
+#include "src/main/cpp/blaze_util_platform.h"
+#include "src/main/cpp/util/errors.h"
+#include "src/main/cpp/util/exit_code.h"
+#include "src/main/cpp/util/file.h"
+#include "src/main/cpp/util/port.h"
+#include "src/main/cpp/util/strings.h"
+
+namespace blaze {
+
+using blaze_util::die;
+using blaze_util::pdie;
+using blaze_util::PrintWarning;
+using std::string;
+
+string GetOutputRoot() {
+  char buf[2048];
+  struct passwd pwbuf;
+  struct passwd *pw = NULL;
+  int uid = getuid();
+  int r = getpwuid_r(uid, &pwbuf, buf, 2048, &pw);
+  if (r != -1 && pw != NULL) {
+    return blaze_util::JoinPath(pw->pw_dir, ".cache/bazel");
+  } else {
+    return "/tmp";
+  }
+}
+
+void WarnFilesystemType(const string &output_base) {
+  struct statfs buf = {};
+  if (statfs(output_base.c_str(), &buf) < 0) {
+    PrintWarning("couldn't get file system type information for '%s': %s",
+                output_base.c_str(), strerror(errno));
+    return;
+  }
+
+  if (strcmp(buf.f_fstypename, "nfs") == 0) {
+    PrintWarning(
+        "Output base '%s' is on NFS. This may lead "
+        "to surprising failures and undetermined behavior.",
+        output_base.c_str());
+  }
+}
+
+string GetSelfPath() {
+  char buffer[PATH_MAX+1];
+  int name[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
+  size_t len = sizeof(buffer);
+
+  if (sysctl(name, 4, buffer, &len, NULL, 0) == 0 && len > 0) {
+    buffer[len] = '\0';
+  }
+
+  return string(buffer);
+}
+
+uint64_t GetMillisecondsMonotonic() {
+  struct timespec ts = {};
+  clock_gettime(CLOCK_MONOTONIC, &ts);
+  return ts.tv_sec * 1000LL + (ts.tv_nsec / 1000000LL);
+}
+
+uint64_t GetMillisecondsSinceProcessStart() {
+  struct timespec ts = {};
+  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts);
+  return ts.tv_sec * 1000LL + (ts.tv_nsec / 1000000LL);
+}
+
+void SetScheduling(bool batch_cpu_scheduling, int io_nice_level) {
+  // Stubbed out so we can compile for FreeBSD.
+}
+
+string GetProcessCWD(int pid) {
+  char buffer[PATH_MAX+1];
+  int name[4] = { CTL_KERN, KERN_PROC, KERN_PROC_CWD, -1 };
+  size_t len = sizeof(buffer);
+
+  if (sysctl(name, 4, buffer, &len, NULL, 0) == 0 && len > 0) {
+    buffer[len] = '\0';
+  }
+
+  return string(buffer);
+}
+
+bool IsSharedLibrary(const string &filename) {
+  return blaze_util::ends_with(filename, ".so");
+}
+
+string GetDefaultHostJavabase() {
+  // if JAVA_HOME is defined, then use it as default.
+  string javahome = GetEnv("JAVA_HOME");
+  return !javahome.empty() ? javahome : "/usr/local/openjdk8";
+}
+
+void WriteSystemSpecificProcessIdentifier(
+    const string& server_dir, pid_t server_pid) {
+}
+
+bool VerifyServerProcess(int pid, const string &output_base) {
+  // TODO(lberki): This only checks for the process's existence, not whether
+  // its start time matches. Therefore this might accidentally kill an
+  // unrelated process if the server died and the PID got reused.
+  return killpg(pid, 0) == 0;
+}
+
+// Not supported.
+void ExcludePathFromBackup(const string &path) {
+}
+
+int32_t GetExplicitSystemLimit(const int resource) {
+  return -1;
+}
+
+}  // namespace blaze
