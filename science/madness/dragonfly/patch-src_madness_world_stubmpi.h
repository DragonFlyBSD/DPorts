--- src/madness/world/stubmpi.h.orig	2018-08-24 00:32:22 UTC
+++ src/madness/world/stubmpi.h
@@ -24,7 +24,7 @@ typedef int MPI_Comm;
 #define MPI_COMM_WORLD (0x44000000)
 #define MPI_UNDEFINED      (-32766)
 
-typedef MPI_Errhandler int;
+typedef int MPI_Errhandler; // ehem?
 
 /* MPI's error classes */
 /* these constants are consistent with MPICH2 mpi.h */
