--- tools/pdb_distance_matrix.cc.orig
+++ tools/pdb_distance_matrix.cc
@@ -19,6 +19,7 @@
    MA 02111-1307, USA. */
 
 #include "dsrpdb/PDB.h"
+#include <limits>
 #include <cstdlib>
 #include <iostream>
 #include <fstream>
