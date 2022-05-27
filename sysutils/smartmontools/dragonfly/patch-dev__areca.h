--- dev_areca.h.orig	2021-02-01 20:36:02 UTC
+++ dev_areca.h
@@ -51,7 +51,7 @@ ARCMSR_CMD_TOTAL
 #define ARCMSR_IOCTL_CLEAR_RQBUFFER          (ARECA_SATA_RAID | FUNCTION_CLEAR_RQBUFFER)
 #define ARCMSR_IOCTL_CLEAR_WQBUFFER          (ARECA_SATA_RAID | FUNCTION_CLEAR_WQBUFFER)
 #define ARCMSR_IOCTL_RETURN_CODE_3F          (ARECA_SATA_RAID | FUNCTION_RETURN_CODE_3F)
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/ioctl.h> // _IOWR
 
 /*FunctionCode*/
