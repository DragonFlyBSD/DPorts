--- chrome/browser/flag_descriptions.h.orig	2026-09-20 16:45:09 UTC
+++ chrome/browser/flag_descriptions.h
@@ -8557,7 +8557,11 @@
 inline constexpr char kAudioBackendDescription[] =
 #if BUILDFLAG(IS_OPENBSD)
     "Select the desired audio backend to use. The default is sndio.";
-#elif BUILDFLAG(IS_FREEBSD)
+#else
+    // Every other BSD, DragonFly included. This must not be an #elif on a
+    // specific OS: inside #if BUILDFLAG(IS_BSD), a BSD matching no branch
+    // leaves this declaration with no initializer at all, which reports as
+    // "expected expression" at the end of the namespace.
     "Select the desired audio backend to use. The default will automatically "
     "enumerate through the supported backends.";
 #endif
