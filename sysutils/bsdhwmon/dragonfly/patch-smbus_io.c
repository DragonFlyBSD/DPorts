--- smbus_io.c.orig	2015-12-06 16:00:18.000000000 +0200
+++ smbus_io.c
@@ -25,11 +25,17 @@ SUCH DAMAGE.
 */
 
 #include <sys/param.h>
+#ifdef __DragonFly__
+#include <dev/smbus/smb/smb.h>
+#else
 #include <dev/smbus/smb.h>
+#endif
 
 #include <string.h>
 #include <err.h>
+#ifndef __DragonFly__
 #include <osreldate.h>
+#endif
 #include <sysexits.h>
 
 /*
@@ -93,11 +99,11 @@ read_byte(int fd, int slave, const char
 
 	memset(&c, 0, sizeof(struct smbcmd));
 
-#if (__FreeBSD_version >= 1100070)
+#if defined(__DragonFly__) || (defined(__FreeBSD__) && (__FreeBSD_version >= 1100070))
 	c.slave = slave << 1;
 	c.rbuf = ibuf;
 	c.rcount = 1;
-#elif (__FreeBSD_version >= 702101)
+#elif defined(__FreeBSD__) && (__FreeBSD_version >= 702101)
 	c.slave = (u_char) (slave & 0xff) << 1;
 	c.data.byte_ptr = ibuf;
 #else
@@ -137,10 +143,10 @@ write_byte(int fd, int slave, const char
 
 	memset(&c, 0, sizeof(struct smbcmd));
 
-#if (__FreeBSD_version >= 1100070)
+#if defined(__DragonFly__) || (defined(__FreeBSD__) && (__FreeBSD_version >= 1100070))
 	c.slave = slave << 1;
 	c.wdata.byte = value;
-#elif (__FreeBSD_version >= 702101)
+#elif defined(__FreeBSD__) && (__FreeBSD_version >= 702101)
 	c.slave = (u_char) (slave & 0xff) << 1;
 	c.data.byte = value;
 #else
