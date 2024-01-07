--- tls/s2n_ktls_io.c.orig	2023-09-08 15:26:12 UTC
+++ tls/s2n_ktls_io.c
@@ -13,7 +13,7 @@
  * permissions and limitations under the License.
  */
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
     /* https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_socket.h.html
      * The POSIX standard does not define the CMSG_LEN and CMSG_SPACE macros. FreeBSD
      * and APPLE check and disable these macros if the _POSIX_C_SOURCE flag is set.
