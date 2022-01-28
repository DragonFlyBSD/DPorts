--- src/lib/printers/notesectionprinter.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/printers/notesectionprinter.cpp
@@ -15,6 +15,11 @@
     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
 
+#include "elfdefinitions.h" // must come first before <elf.h>
+#define _ELF_H_
+#ifndef ELF_NOTE_FREEBSD
+#define ELF_NOTE_FREEBSD "FreeBSD"
+#endif
 #include "notesectionprinter.h"
 #include <elf/elfnoteentry.h>
 
