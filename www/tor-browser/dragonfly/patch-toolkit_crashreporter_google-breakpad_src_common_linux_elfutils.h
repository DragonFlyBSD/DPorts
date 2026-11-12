--- toolkit/crashreporter/google-breakpad/src/common/linux/elfutils.h.orig	2026-09-04 00:01:31 UTC
+++ toolkit/crashreporter/google-breakpad/src/common/linux/elfutils.h
@@ -37,6 +37,13 @@
 #include <link.h>
 #include <stdint.h>
 
+#if defined(__DragonFly__) && !defined(Elf32_Nhdr)
+// DragonFly's <elf.h> provides Elf_Note instead of the sized Elf32_Nhdr/Elf64_Nhdr
+// aliases (same layout; see existing dfly shared-libraries-linux.cc handling).
+typedef Elf_Note Elf32_Nhdr;
+typedef Elf_Note Elf64_Nhdr;
+#endif
+
 #include "common/memory_allocator.h"
 
 namespace google_breakpad {
