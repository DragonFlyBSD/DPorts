--- src/lib/printers/dynamicsectionprinter.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/printers/dynamicsectionprinter.cpp
@@ -15,6 +15,29 @@
     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
 
+#include "elfdefinitions.h" // must come first before <elf.h>
+#define _ELF_H_
+#ifndef DF_1_GLOBAL
+#define DF_1_GLOBAL	0x00000002
+#endif
+#ifndef DF_1_NODELETE
+#define DF_1_NODELETE	0x00000008
+#endif
+#ifndef DF_1_LOADFLTR
+#define DF_1_LOADFLTR	0x00000010
+#endif
+#ifndef DF_1_NOOPEN
+#define DF_1_NOOPEN	0x00000040
+#endif
+#ifndef DF_1_ORIGIN
+#define DF_1_ORIGIN	0x00000080
+#endif
+#ifndef DF_1_INTERPOSE
+#define DF_1_INTERPOSE	0x00000400
+#endif
+#ifndef DF_1_NODEFLIB
+#define DF_1_NODEFLIB	0x00000800
+#endif
 #include "dynamicsectionprinter.h"
 #include "printerutils_p.h"
 
