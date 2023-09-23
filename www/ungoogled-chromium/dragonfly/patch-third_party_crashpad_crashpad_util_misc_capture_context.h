diff --git third_party/crashpad/crashpad/util/misc/capture_context.h third_party/crashpad/crashpad/util/misc/capture_context.h
index 63e57a29acf..c9c0e9476fd 100644
--- third_party/crashpad/crashpad/util/misc/capture_context.h
+++ third_party/crashpad/crashpad/util/misc/capture_context.h
@@ -22,7 +22,7 @@
 #elif BUILDFLAG(IS_WIN)
 #include <windows.h>
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-      BUILDFLAG(IS_FREEBSD)
+  BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <ucontext.h>
 #endif  // BUILDFLAG(IS_APPLE)
 
diff --git third_party/dav1d/libdav1d/include/stdatomic.h third_party/dav1d/libdav1d/include/stdatomic.h
new file mode 100644
index 00000000000..b4845a74e49
