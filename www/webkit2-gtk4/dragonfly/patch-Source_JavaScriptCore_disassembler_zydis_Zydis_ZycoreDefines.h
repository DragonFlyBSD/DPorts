--- Source/JavaScriptCore/disassembler/zydis/Zydis/ZycoreDefines.h.orig	2022-08-31 07:59:51 UTC
+++ Source/JavaScriptCore/disassembler/zydis/Zydis/ZycoreDefines.h
@@ -91,7 +91,7 @@
 #elif defined(__linux)
 #   define ZYAN_LINUX
 #   define ZYAN_POSIX
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #   define ZYAN_FREEBSD
 #   define ZYAN_POSIX
 #elif defined(sun) || defined(__sun)
