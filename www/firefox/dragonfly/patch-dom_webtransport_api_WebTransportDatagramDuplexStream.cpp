--- dom/webtransport/api/WebTransportDatagramDuplexStream.cpp.orig	2026-11-05 07:29:55 UTC
+++ dom/webtransport/api/WebTransportDatagramDuplexStream.cpp
@@ -88,7 +88,7 @@
   Nullable<double> value = aMaxAge;
   if (!value.IsNull()) {
     // Step 1
-    if (isnan(value.Value()) || value.Value() < 0.) {
+    if (std::isnan(value.Value()) || value.Value() < 0.) {
       aRv.ThrowRangeError("Invalid IncomingMaxAge");
       return;
     }
@@ -107,7 +107,7 @@
   Nullable<double> value = aMaxAge;
   if (!value.IsNull()) {
     // Step 1
-    if (isnan(value.Value()) || value.Value() < 0.) {
+    if (std::isnan(value.Value()) || value.Value() < 0.) {
       aRv.ThrowRangeError("Invalid OutgoingMaxAge");
       return;
     }
