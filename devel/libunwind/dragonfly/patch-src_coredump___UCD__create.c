--- src/coredump/_UCD_create.c.orig	2019-02-12 16:29:04 UTC
+++ src/coredump/_UCD_create.c
@@ -66,6 +66,13 @@ WITH THE SOFTWARE OR THE USE OR OTHER DE
 #include "_UCD_lib.h"
 #include "_UCD_internal.h"
 
+/* Note header in a PT_NOTE section */
+typedef struct elf_note {
+    Elf32_Word n_namesz; /* Name size */
+    Elf32_Word n_descsz; /* Content size */
+    Elf32_Word n_type;  /* Content type */
+} Elf32_Nhdr;
+
 #define NOTE_DATA(_hdr) STRUCT_MEMBER_P((_hdr), sizeof (Elf32_Nhdr) + UNW_ALIGN((_hdr)->n_namesz, 4))
 #define NOTE_SIZE(_hdr) (sizeof (Elf32_Nhdr) + UNW_ALIGN((_hdr)->n_namesz, 4) + (_hdr)->n_descsz)
 #define NOTE_NEXT(_hdr) STRUCT_MEMBER_P((_hdr), NOTE_SIZE(_hdr))
