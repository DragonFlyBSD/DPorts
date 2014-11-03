--- src/Instrumentation/newnavradio.cxx.orig	2014-11-03 15:11:54.382329000 +0000
+++ src/Instrumentation/newnavradio.cxx
@@ -777,7 +777,7 @@ void GS::update( double dt, const SGGeod
   double offset = _targetGlideslope_deg - gsDirect;
   if( offset < 0.0 )
     offset = _targetGlideslope_deg/2 * sawtooth(2.0*offset/_targetGlideslope_deg);
-  assert( false == isnan(offset) );
+  assert( false == std::isnan(offset) );
 // GS is documented to be 1.4 degrees thick, 
 // i.e. plus or minus 0.7 degrees from the midline:
   _glideslopeOffset_norm = SGMiscd::clip(offset/0.7, -1.0, 1.0);
