--- libfreeipmi/driver/ipmi-kcs-driver.c.orig	2026-10-23 00:00:00 UTC
+++ libfreeipmi/driver/ipmi-kcs-driver.c
@@ -145,7 +145,7 @@
 
 #define IPMI_KCS_MICROSECONDS_IN_SECOND 1000000
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <machine/cpufunc.h>
 # include <machine/sysarch.h>
 #if defined(__powerpc__)
@@ -162,7 +162,7 @@
 # include <asm/io.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 # define _INB(port)  inb (port)
 # define _OUTB(data, port)  outb (port, data)
 #elif defined(HAVE_INB) && defined(HAVE_OUTB)
@@ -200,7 +200,7 @@
   uint8_t register_spacing;
   unsigned int flags;
   unsigned int poll_interval;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef USE_IOPERM
   int dev_fd;
 #endif
@@ -278,7 +278,7 @@
   ctx->register_spacing = IPMI_KCS_SMS_REGISTER_SPACING_DEFAULT;
   ctx->flags = IPMI_KCS_FLAGS_DEFAULT;
   ctx->poll_interval = IPMI_KCS_SLEEP_USECS;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef USE_IOPERM
   ctx->dev_fd = -1;
 #endif
@@ -306,7 +306,7 @@
 
   ctx->magic = ~IPMI_KCS_CTX_MAGIC;
   ctx->errnum = IPMI_KCS_ERR_SUCCESS;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef USE_IOPERM
   /* ignore potential error, destroy path */
   close (ctx->dev_fd);
@@ -495,7 +495,7 @@
   if (ctx->io_init)
     goto out;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifdef USE_IOPERM
   /* i386_set_ioperm has known problems on FBSD 5.x (bus errors). */
   if (sysarch (I386_SET_IOPERM, (void *) (ctx->driver_address, 0x02, 0x01)))
