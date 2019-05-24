--- liblash/socket.c.orig	2006-09-16 21:25:31.000000000 +0200
+++ liblash/socket.c
@@ -18,8 +18,6 @@
  *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
  */
 
-#define _POSIX_SOURCE /* addrinfo */
-
 #include <stdint.h>
 #include <sys/types.h>
 #include <sys/socket.h>
