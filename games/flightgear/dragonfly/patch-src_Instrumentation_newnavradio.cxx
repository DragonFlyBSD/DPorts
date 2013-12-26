--- src/Instrumentation/newnavradio.cxx.orig	2013-09-16 18:48:58.000000000 +0000
+++ src/Instrumentation/newnavradio.cxx
@@ -20,6 +20,8 @@
 // Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 //
 
+#include <cmath>
+
 #ifdef HAVE_CONFIG_H
 #  include <config.h>
 #endif
@@ -777,7 +779,7 @@ void GS::update( double dt, const SGGeod
   double offset = _targetGlideslope_deg - gsDirect;
   if( offset < 0.0 )
     offset = _targetGlideslope_deg/2 * sawtooth(2.0*offset/_targetGlideslope_deg);
-  assert( false == isnan(offset) );
+  assert( false == std::isnan(offset) );
 // GS is documented to be 1.4 degrees thick, 
 // i.e. plus or minus 0.7 degrees from the midline:
   _glideslopeOffset_norm = SGMiscd::clip(offset/0.7, -1.0, 1.0);
