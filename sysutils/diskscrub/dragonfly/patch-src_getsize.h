--- src/getsize.h.orig	2012-06-20 22:00:27.000000000 +0000
+++ src/getsize.h
@@ -24,7 +24,7 @@
  *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
 \*****************************************************************************/
 
-int getsize(char *path, off_t *sizep);
+int ds_getsize(char *path, off_t *sizep);
 off_t str2size(char *str);
 int str2int(char *str);
 void size2str(char *str, int len, off_t size);
