--- modules/server/hep3_capture.cpp.orig
+++ modules/server/hep3_capture.cpp
@@ -435,7 +435,9 @@
     {"UDP",     IPPROTO_UDP},
     {"IPV6",    IPPROTO_IPV6},
     {"SCTP",    IPPROTO_SCTP},
+#ifdef IPPROTO_UDPLITE
     {"UDPLITE", IPPROTO_UDPLITE},
+#endif
     {"RAW",     IPPROTO_RAW},
     {0, 0}
 };
