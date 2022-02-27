--- src/track/libheaptrack.cpp.orig	2021-12-18 18:14:38 UTC
+++ src/track/libheaptrack.cpp
@@ -413,6 +413,8 @@ public:
             s_data->procStatm = -1;
             return;
         }
+#elif defined(__DragonFly__)
+	return;
 #elif defined(__FreeBSD__)
         auto proc_info = kinfo_getproc(getpid());
         if (proc_info == nullptr) {
