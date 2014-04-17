--- ompi/mca/bcol/basesmuma/bcol_basesmuma_reduce.h.orig	2014-03-27 05:24:59.000000000 +0000
+++ ompi/mca/bcol/basesmuma/bcol_basesmuma_reduce.h
@@ -9,6 +9,7 @@
 #include "ompi/communicator/communicator.h"
 #include "bcol_basesmuma_utils.h"
 #include <unistd.h>
+#undef SEG_SIZE
 
 enum {
     BLOCK_OFFSET = 0,
