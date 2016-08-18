--- hdf/src/hdfi.h.orig	2016-08-18 14:16:30.000000000 +0300
+++ hdf/src/hdfi.h
@@ -1016,7 +1016,7 @@ typedef long              hdf_pint_t;
 /*-----------------------------------------------------*/
 /* 64-bit Free BSD */
 
-#if defined __FreeBSD__ && defined __x86_64__
+#if (defined __FreeBSD__ || defined __DragonFly__) && defined __x86_64__
 
 #ifdef GOT_MACHINE
 If you get an error on this line more than one machine type has been defined.
