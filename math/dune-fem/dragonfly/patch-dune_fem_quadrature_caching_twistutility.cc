--- dune/fem/quadrature/caching/twistutility.cc.orig	2021-08-24 13:32:47 UTC
+++ dune/fem/quadrature/caching/twistutility.cc
@@ -5,6 +5,9 @@
 #include <dune/fem/quadrature/caching/twistutility.hh>
 
 #if HAVE_UG
+extern "C" {
+typedef struct ompi_communicator_t *MPI_Comm;
+}
 #include <dune/grid/uggrid.hh>
 #endif // #if HAVE_UG
 
