--- mptd.h.orig	2019-06-30 10:53:26.166368000 +0200
+++ mptd.h	2019-06-30 10:54:06.146961000 +0200
@@ -35,6 +35,10 @@
 #include <dev/mpt/mpilib/mpi_cnfg.h>
 #include <dev/mpt/mpilib/mpi_raid.h>
 
+#ifndef SPECNAMELEN
+#define	SPECNAMELEN	63
+#endif
+
 #define	IOC_STATUS_SUCCESS(status)					\
 	(((status) & MPI_IOCSTATUS_MASK) == MPI_IOCSTATUS_SUCCESS)
 
