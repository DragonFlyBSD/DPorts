--- gold/x86_64.cc.orig	2016-08-03 07:36:53 UTC
+++ gold/x86_64.cc
@@ -1120,7 +1120,7 @@ const Target::Target_info Target_x86_64<
   true,			// is_default_stack_executable
   true,			// can_icf_inline_merge_sections
   '\0',			// wrap_char
-  "/lib/ld64.so.1",     // program interpreter
+  "/libexec/ld-elf.so.2",     // program interpreter
   0x400000,		// default_text_segment_address
   0x1000,		// abi_pagesize (overridable by -z max-page-size)
   0x1000,		// common_pagesize (overridable by -z common-page-size)
