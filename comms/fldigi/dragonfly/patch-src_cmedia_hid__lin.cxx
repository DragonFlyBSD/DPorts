--- src/cmedia/hid_lin.cxx.orig
+++ src/cmedia/hid_lin.cxx
@@ -35,11 +35,26 @@
 #include <fcntl.h>
 #include <poll.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 typedef unsigned short uint16_t;
 typedef unsigned char __u8;
 typedef unsigned long __u32;
+#ifdef __FreeBSD__
 #include <dev/hid/hidraw.h>
+#else
+/* DragonFly has no hidraw(4): take the definitions FreeBSD's
+   <dev/hid/hidraw.h> provides; the ioctls then fail at run time. */
+#include <sys/ioccom.h>
+#define HID_MAX_DESCRIPTOR_SIZE	4096
+struct hidraw_report_descriptor {
+	uint32_t	size;
+	uint8_t		value[HID_MAX_DESCRIPTOR_SIZE];
+};
+#define HIDIOCGRDESCSIZE	_IOR('U', 30, int)
+#define HIDIOCGRDESC		_IO ('U', 31)
+#define HIDIOCSFEATURE(len)	_IOC(IOC_IN,    'U', 35, len)
+#define HIDIOCGFEATURE(len)	_IOC(IOC_INOUT, 'U', 36, len)
+#endif
 /* These are from linux */
 #define BUS_USB			0x03
 #define BUS_BLUETOOTH		0x05
