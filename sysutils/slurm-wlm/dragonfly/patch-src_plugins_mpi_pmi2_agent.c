--- src/plugins/mpi/pmi2/agent.c.orig	2019-04-12 04:20:25 UTC
+++ src/plugins/mpi/pmi2/agent.c
@@ -38,7 +38,7 @@
  *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA.
 \*****************************************************************************/
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>	/* AF_INET */
 #endif
 
