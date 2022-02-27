--- filan.c.orig	2021-10-31 18:06:09 UTC
+++ filan.c
@@ -905,6 +905,7 @@ int tcpan(int fd, FILE *outfile) {
 #if WITH_TCP
 
 int tcpan2(int fd, FILE *outfile) {
+#if !defined(__DragonFly__)
    struct tcp_info tcpinfo;
    socklen_t tcpinfolen = sizeof(tcpinfo);
    int result;
@@ -928,6 +929,7 @@ int tcpan2(int fd, FILE *outfile) {
    //fprintf(outfile, "%s={%u}\t", "TCPI_DELIVERY_RATE_APP_LIMITED", tcpinfo.tcpi_delivery_rate_app_limited);
    //fprintf(outfile, "%s={%u}\t", "TCPI_FASTOPEN_CLIENT_FAIL", tcpinfo.tcpi_fastopen_client_fail);
    // fprintf(outfile, "%s={%u}\t", "TCPI_", tcpinfo.tcpi_);
+#endif
 
    return 0;
 }
