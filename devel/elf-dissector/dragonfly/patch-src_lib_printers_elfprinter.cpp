--- src/lib/printers/elfprinter.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/printers/elfprinter.cpp
@@ -15,6 +15,8 @@
     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
 
+#include "elfdefinitions.h" // must come first before <elf.h>
+#define _ELF_H_
 #include "elfprinter.h"
 #include "printerutils_p.h"
 
