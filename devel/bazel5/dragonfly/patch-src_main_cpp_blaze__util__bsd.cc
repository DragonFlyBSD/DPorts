--- src/main/cpp/blaze_util_bsd.cc.orig	Tue Mar  4 14:55:50 2025
+++ src/main/cpp/blaze_util_bsd.cc	Tue Mar
@@ -15,6 +15,8 @@
 #if defined(__FreeBSD__)
 # define HAVE_PROCSTAT
 # define STANDARD_JAVABASE "%%JAVA_HOME%%"
+#elif defined(__DragonFly__)                                                                                                                                
+# define STANDARD_JAVABASE "/usr/local/openjdk11"
 #elif defined(__OpenBSD__)
 # define STANDARD_JAVABASE "/usr/local/jdk-1.8.0"
 #else
@@ -112,7 +114,7 @@ string GetSelfPath(const char* argv0) {
   }
   procstat_close(procstat);
   return string(buffer);
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__DragonFly__)
   // OpenBSD does not provide a way for a running process to find a path to its
   // own executable, so we try to figure out a path by inspecting argv[0]. In
   // theory this is inadequate, since the parent process can set argv[0] to
