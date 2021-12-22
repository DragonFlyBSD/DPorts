--- apps/transmitmedia.cpp.orig	2021-04-27 08:44:11 UTC
+++ apps/transmitmedia.cpp
@@ -826,7 +826,9 @@ protected:
 
         if (is_multicast)
         {
+#ifdef IP_ADD_SOURCE_MEMBERSHIP
             ip_mreq_source mreq_ssm;
+#endif
             ip_mreq mreq;
             sockaddr_any maddr (AF_INET);
             int opt_name;
