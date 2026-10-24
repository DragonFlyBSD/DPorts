--- mozglue/baseprofiler/core/shared-libraries-linux.cc.orig	2026-09-04 00:01:19 UTC
+++ mozglue/baseprofiler/core/shared-libraries-linux.cc
@@ -27,7 +27,8 @@
 #include <vector>
 #include <optional>
 
-#if defined(GP_OS_linux) || defined(GP_OS_android) || defined(GP_OS_freebsd)
+#if defined(GP_OS_linux) || defined(GP_OS_android) || defined(GP_OS_freebsd) || \
+    defined(GP_OS_dragonfly)
 #  include <link.h>  // dl_phdr_info, ElfW()
 #else
 #  error "Unexpected configuration"
@@ -39,8 +40,13 @@ extern "C" MOZ_EXPORT __attribute__((weak)) int dl_ite
     void* data);
 #endif
 
-#if defined(GP_OS_freebsd) && !defined(ElfW)
+#if (defined(GP_OS_freebsd) || defined(GP_OS_dragonfly)) && !defined(ElfW)
 #  define ElfW(type) Elf_##type
+#endif
+
+#if defined(GP_OS_dragonfly) && !defined(Elf32_Nhdr)
+// DragonFly's <elf.h> provides Elf_Note but not the Elf32_Nhdr alias.
+typedef Elf_Note Elf32_Nhdr;
 #endif
 
 // ----------------------------------------------------------------------------
