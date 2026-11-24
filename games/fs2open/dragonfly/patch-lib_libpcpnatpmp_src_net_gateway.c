--- lib/libpcpnatpmp/src/net/gateway.c.orig
+++ lib/libpcpnatpmp/src/net/gateway.c
@@ -65,7 +65,7 @@
 #include "pcp_win_defines.h"
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <net/if_dl.h> //struct sockaddr_dl
 
 #include <sys/sysctl.h>
@@ -818,7 +818,7 @@
         struct sockaddr *gateway, char *ifname, route_in_t *routein,
         route_out_t *routeout)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return route_op(RTM_GET, &(((struct sockaddr_in *) dst)->sin_addr.s_addr), mask,
             &(((struct sockaddr_in *) gateway)->sin_addr.s_addr), ifname, routein, routeout);
 #else
@@ -830,7 +830,7 @@
 static int route_get(in_addr_t *dst, in_addr_t *mask, in_addr_t *gateway,
         char iface[], route_in_t *routein, route_out_t *routeout)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return route_op(RTM_GET, dst, mask, gateway, iface, routein, routeout);
 #else
     PCP_LOG(PCP_LOGLVL_DEBUG, "%s: todo...\n", __FUNCTION__);
@@ -841,7 +841,7 @@
 static int route_add(in_addr_t dst, in_addr_t mask, in_addr_t gateway,
         const char *iface, route_in_t *routein, route_out_t *routeout)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return route_op(RTM_ADD, &dst, &mask, &gateway, (char *)iface, routein, routeout);
 #else
     PCP_LOG(PCP_LOGLVL_DEBUG, "%s: todo...\n", __FUNCTION__);
@@ -852,7 +852,7 @@
 static int route_change(in_addr_t dst, in_addr_t mask, in_addr_t gateway,
         const char *iface, route_in_t *routein, route_out_t *routeout)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return route_op(RTM_CHANGE, &dst, &mask, &gateway, (char *)iface, routein, routeout);
 #else
     PCP_LOG(PCP_LOGLVL_DEBUG, "%s: todo...\n", __FUNCTION__);
@@ -863,7 +863,7 @@
 static int route_delete(in_addr_t dst, in_addr_t mask, route_in_t *routein,
         route_out_t *routeout)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     return route_op(RTM_DELETE, &dst, &mask, 0, NULL, routein, routeout);
 #else
     PCP_LOG(PCP_LOGLVL_DEBUG, "%s: todo...\n", __FUNCTION__);
