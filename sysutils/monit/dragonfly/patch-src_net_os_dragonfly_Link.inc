--- src/net/os/dragonfly/Link.inc.orig	2026-02-14 10:12:24.591577000 +0100
+++ src/net/os/dragonfly/Link.inc	2026-02-14 10:12:43.761721000 +0100
@@ -32,7 +32,7 @@
  */
 
 
-static boolean_t _update(T L, const char *interface) {
+static bool _update(T L, const char *interface) {
         for (struct ifaddrs *a = _stats.addrs; a != NULL; a = a->ifa_next) {
                 if (a->ifa_addr == NULL)
                         continue;
