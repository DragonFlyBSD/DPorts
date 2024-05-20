--- filan.c.orig	2023-11-13 19:31:08 UTC
+++ filan.c
@@ -939,6 +939,7 @@ int tcpan(int fd, FILE *outfile) {
 #if WITH_TCP && defined(TCP_INFO)
 
 int tcpan2(int fd, FILE *outfile) {
+#if !defined(__DragonFly__)
    struct tcp_info tcpinfo;
    socklen_t tcpinfolen = sizeof(tcpinfo);
    int result;
@@ -964,7 +965,7 @@ int tcpan2(int fd, FILE *outfile) {
    fprintf(outfile, "%s={%u}\t", "TCPI_FASTOPEN_CLIENT_FAIL", tcpinfo.tcpi_fastopen_client_fail);
    fprintf(outfile, "%s={%u}\t", "TCPI_", tcpinfo.tcpi_);
 #endif
-
+#endif
    return 0;
 }
 
