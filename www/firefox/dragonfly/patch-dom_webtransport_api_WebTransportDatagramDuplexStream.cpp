--- dom/webtransport/api/WebTransportDatagramDuplexStream.cpp.orig	2023-06-19 11:04:16 UTC
+++ dom/webtransport/api/WebTransportDatagramDuplexStream.cpp
@@ -62,7 +62,7 @@ void WebTransportDatagramDuplexStream::S
                                                          ErrorResult& aRv) {
   // https://w3c.github.io/webtransport/#dom-webtransportdatagramduplexstream-incomingmaxage
   // Step 1
-  if (isnan(aMaxAge) || aMaxAge < 0.) {
+  if (std::isnan(aMaxAge) || aMaxAge < 0.) {
     aRv.ThrowRangeError("Invalid IncomingMaxAge");
     return;
   }
@@ -78,7 +78,7 @@ void WebTransportDatagramDuplexStream::S
                                                          ErrorResult& aRv) {
   // https://w3c.github.io/webtransport/#dom-webtransportdatagramduplexstream-outgoingmaxage
   // Step 1
-  if (isnan(aMaxAge) || aMaxAge < 0.) {
+  if (std::isnan(aMaxAge) || aMaxAge < 0.) {
     aRv.ThrowRangeError("Invalid OutgoingMaxAge");
     return;
   }
@@ -94,7 +94,7 @@ void WebTransportDatagramDuplexStream::S
     double aWaterMark, ErrorResult& aRv) {
   // https://w3c.github.io/webtransport/#dom-webtransportdatagramduplexstream-incominghighwatermark
   // Step 1
-  if (isnan(aWaterMark) || aWaterMark < 0.) {
+  if (std::isnan(aWaterMark) || aWaterMark < 0.) {
     aRv.ThrowRangeError("Invalid OutgoingMaxAge");
     return;
   }
@@ -110,7 +110,7 @@ void WebTransportDatagramDuplexStream::S
     double aWaterMark, ErrorResult& aRv) {
   // https://w3c.github.io/webtransport/#dom-webtransportdatagramduplexstream-outgoinghighwatermark
   // Step 1
-  if (isnan(aWaterMark) || aWaterMark < 0.) {
+  if (std::isnan(aWaterMark) || aWaterMark < 0.) {
     aRv.ThrowRangeError("Invalid OutgoingHighWaterMark");
     return;
   }
