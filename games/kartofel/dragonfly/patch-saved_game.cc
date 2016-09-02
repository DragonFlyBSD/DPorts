--- saved_game.cc.orig	2009-02-01 03:06:33.000000000 +0200
+++ saved_game.cc
@@ -16,6 +16,7 @@
 //  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 
 #include <cassert>
+#include <cstdio> // for sscanf
 #include <cstdlib>
 #include <sstream>
 #include <zlib.h>
