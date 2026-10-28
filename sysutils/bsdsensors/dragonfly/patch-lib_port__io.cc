--- lib/port_io.cc.orig	2026-10-26 06:59:39 UTC
+++ lib/port_io.cc
@@ -11,8 +11,10 @@
 #include <sys/types.h>
 #include <machine/cpufunc.h>
 #include <sys/ioctl.h>
+#ifndef __DragonFly__
 #include <dev/io/iodev.h>
 #include <machine/iodev.h>
+#endif
 #include <memory>
 #include <fcntl.h>
 #include <unistd.h>
@@ -37,6 +39,12 @@ class PortIOImpl : public PortIO {
     }
 
     Status ReadByte(const AddressType& address, uint8_t* data) override {
+#ifdef __DragonFly__
+        // DragonFly's /dev/io has no IODEV_PIO ioctl: opening it grants
+        // the process I/O privilege, and inb/outb then work directly.
+        *data = inb(address);
+        return OkStatus();
+#else
         struct iodev_pio_req req;
         req.access = IODEV_PIO_READ;
         req.port = address;
@@ -48,8 +56,13 @@ class PortIOImpl : public PortIO {
 
         *data = req.val;
         return OkStatus();
+#endif
     }
     Status WriteByte(const AddressType& address, const uint8_t data) override {
+#ifdef __DragonFly__
+        outb(address, data);
+        return OkStatus();
+#else
         struct iodev_pio_req req;
         req.access = IODEV_PIO_WRITE;
         req.port = address;
@@ -61,6 +74,7 @@ class PortIOImpl : public PortIO {
         }
 
         return OkStatus();
+#endif
     }
 
    private:
