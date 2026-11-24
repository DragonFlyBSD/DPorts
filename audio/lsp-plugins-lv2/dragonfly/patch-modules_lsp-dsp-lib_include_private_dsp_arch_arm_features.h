--- modules/lsp-dsp-lib/include/private/dsp/arch/arm/features.h.orig
+++ modules/lsp-dsp-lib/include/private/dsp/arch/arm/features.h
@@ -24,7 +24,7 @@
 
 #include <lsp-plug.in/common/types.h>
 
-#ifdef PLATFORM_POSIX
+#if defined(PLATFORM_POSIX) && defined(ARCH_ARM)
     #include <sys/auxv.h>
 #endif /* PLATFORM_UNIX */
 
