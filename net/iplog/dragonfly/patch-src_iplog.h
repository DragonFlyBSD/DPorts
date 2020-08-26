--- src/iplog.h.intermediate	2020-08-26 17:38:52 UTC
+++ src/iplog.h
@@ -183,6 +183,9 @@ int tcp_parser(const struct ip *ip);
 int udp_parser(const struct ip *ip);
 int icmp_parser(const struct ip *ip);
 
+#ifdef __DragonFly__
+#undef inet_ntoa_r
+#endif
 u_char *inet_ntoa_r(const struct in_addr *in, u_char *buf, size_t len);
 u_char *host_lookup(const struct in_addr *in, bool resolv, u_char *buf, size_t len);
 u_char *_host_lookup(const struct in_addr *in, u_char *buf, size_t len);
