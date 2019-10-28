--- server.cc.orig	2008-08-20 13:10:23 UTC
+++ server.cc
@@ -12,7 +12,7 @@
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.
 ******************************************************************************/
-#include <sys/types.h>
+#include <sys/param.h>	/* for PATH_MAX and types */
 #include <sys/uio.h>
 #include <sys/un.h>
 #include <sys/ioctl.h>
