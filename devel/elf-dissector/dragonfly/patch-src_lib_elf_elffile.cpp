--- src/lib/elf/elffile.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/elf/elffile.cpp
@@ -15,6 +15,10 @@
     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
 
+#include "elfdefinitions.h" // must come first before <elf.h>
+#define _ELF_H_
+#define ELFMAG "\177ELF"
+#define SELFMAG 4
 #include "elffile.h"
 #include "elfheader.h"
 #include "elfsectionheader_impl.h"
