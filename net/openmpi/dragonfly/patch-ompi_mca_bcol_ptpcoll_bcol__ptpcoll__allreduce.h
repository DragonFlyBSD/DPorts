--- ompi/mca/bcol/ptpcoll/bcol_ptpcoll_allreduce.h.orig	2014-03-27 05:24:59.000000000 +0000
+++ ompi/mca/bcol/ptpcoll/bcol_ptpcoll_allreduce.h
@@ -16,6 +16,7 @@
 #include "ompi/datatype/ompi_datatype.h"
 #include "bcol_ptpcoll.h"
 #include "bcol_ptpcoll_utils.h"
+#undef SEG_SIZE
 
 enum {
 	BLOCK_OFFSET = 0,
