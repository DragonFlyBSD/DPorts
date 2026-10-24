--- components/enterprise/client_certificates/core/private_key_factory.cc.orig	2026-09-20 13:33:00 UTC
+++ components/enterprise/client_certificates/core/private_key_factory.cc
@@ -123,8 +123,8 @@
     scoped_refptr<PrivateKey> private_key) {
   if (!private_key && source != PrivateKeySource::kSoftwareKey) {
     for (auto fallback_source =
-             ++std::find(std::begin(kKeySourcesOrderedBySecurity),
-                         std::end(kKeySourcesOrderedBySecurity), source);
+             std::next(std::find(std::begin(kKeySourcesOrderedBySecurity),
+                         std::end(kKeySourcesOrderedBySecurity), source));
          fallback_source != std::end(kKeySourcesOrderedBySecurity);
          fallback_source++) {
       auto it = sub_factories_.find(*fallback_source);
