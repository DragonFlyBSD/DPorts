--- libfreeipmi/driver/ipmi-openipmi-driver.c.orig	2026-10-23 00:00:00 UTC
+++ libfreeipmi/driver/ipmi-openipmi-driver.c
@@ -128,7 +128,7 @@
 #define IPMI_IOC_MAGIC             'i'
 #define IPMICTL_RECEIVE_MSG_TRUNC  _IOWR (IPMI_IOC_MAGIC, 11, struct ipmi_recv)
 #define IPMICTL_RECEIVE_MSG        _IOWR (IPMI_IOC_MAGIC, 12, struct ipmi_recv)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define IPMICTL_SEND_COMMAND       _IOW (IPMI_IOC_MAGIC,  13, struct ipmi_req)
 #define IPMICTL_SET_MY_ADDRESS_CMD _IOW (IPMI_IOC_MAGIC,  17, unsigned int)
 #else
