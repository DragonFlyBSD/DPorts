--- src/main/cpp/blaze_util_bsd.cc.orig
+++ src/main/cpp/blaze_util_bsd.cc
@@ -15,6 +15,8 @@
 #if defined(__FreeBSD__)
 # define HAVE_PROCSTAT
 # define STANDARD_JAVABASE "%%JAVA_HOME%%"
+#elif defined(__DragonFly__)
+# define STANDARD_JAVABASE "%%JAVA_HOME%%"
 #elif defined(__OpenBSD__)
 # define STANDARD_JAVABASE "/usr/local/jdk-17"
 #else
@@ -118,6 +120,15 @@
     procstat_freeprocs(procstat, p);
   }
   procstat_close(procstat);
+  return string(buffer);
+#elif defined(__DragonFly__)
+  char buffer[PATH_MAX] = {};
+  int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
+  size_t len = sizeof(buffer);
+  if (sysctl(mib, 4, buffer, &len, nullptr, 0) != 0) {
+    BAZEL_DIE(blaze_exit_code::INTERNAL_ERROR)
+        << "sysctl KERN_PROC_PATHNAME failed: " << GetLastErrorString();
+  }
   return string(buffer);
 #elif defined(__OpenBSD__)
   // OpenBSD does not provide a way for a running process to find a path to its
