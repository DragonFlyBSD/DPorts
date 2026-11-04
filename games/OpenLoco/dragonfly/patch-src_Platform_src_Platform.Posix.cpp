--- src/Platform/src/Platform.Posix.cpp.orig	2026-09-18 18:47:20 UTC
+++ src/Platform/src/Platform.Posix.cpp
@@ -116,7 +116,7 @@
         {
             fprintf(stderr, "failed to read /proc/self/exe");
         }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
         const int32_t mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
         auto exeLen = sizeof(exePath);
         if (sysctl(mib, 4, exePath, &exeLen, nullptr, 0) == -1)
