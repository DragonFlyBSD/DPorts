--- src/connect/ncbi_lbsm_ipc.h.orig	2014-01-16 00:48:03.000000000 +0200
+++ src/connect/ncbi_lbsm_ipc.h
@@ -81,7 +81,7 @@ extern "C" {
 #define LBSM_SHM_PROT                                               \
     ( S_IRUSR | S_IWUSR | S_IRGRP           | S_IROTH           )
 
-#if !defined(HAVE_SEMUN)  &&  !defined(__FreeBSD__)  &&  !defined(__MWERKS__) \
+#if !defined(HAVE_SEMUN)  &&  !defined(__FreeBSD__) && !defined(__DragonFly__)  &&  !defined(__MWERKS__) \
     &&  (!defined(__GNU_LIBRARY__)  ||  defined(_SEM_SEMUN_UNDEFINED))
 union semun {
     int              val;
