--- src/parkingloader.cxx.orig	2014-04-04 00:28:20.442994000 +0000
+++ src/parkingloader.cxx
@@ -29,7 +29,7 @@ void  ParkingLoader::endXML () {
 }
 
 void  ParkingLoader::startElement( const char * name, const XMLAttributes &atts ) {
-    if (name == string("Parking"))
+    if (name == std::string("Parking"))
     {
         std::string type, gateName, gateNumber;
         for (int i = 0; i < atts.size(); i++)
