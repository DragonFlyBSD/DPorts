--- agent/mibgroup/udp-mib/data_access/udp_endpoint_freebsd4.c.orig	2017-04-13 13:08:40 UTC
+++ agent/mibgroup/udp-mib/data_access/udp_endpoint_freebsd4.c
@@ -153,9 +153,13 @@ _load(netsnmp_container *container, u_in
 #endif
 
 #if !defined(NETSNMP_ENABLE_IPV6)
-#if __FreeBSD_version >= 1200026
+#ifndef in6p_vflag
+#if defined(__FreeBSD__) && __FreeBSD_version >= 1200026
 	if (pcb.inp_vflag & INP_IPV6)
 #else
+	if (INP_ISIPV6(&(pcb.xi_inp)))
+#endif
+#else
         if (pcb.xi_inp.inp_vflag & INP_IPV6)
 #endif
 	    continue;
@@ -188,7 +192,11 @@ _load(netsnmp_container *container, u_in
         entry->rmt_port = htons(pcb.xi_inp.inp_fport);
         
         /** the addr string may need work */
+#ifdef in6p_vflag
 	if (pcb.xi_inp.inp_vflag & INP_IPV6) {
+#else
+	if (INP_ISIPV6(&(pcb.xi_inp))) {
+#endif
 	    entry->loc_addr_len = entry->rmt_addr_len = 16;
 	    memcpy(entry->loc_addr, &pcb.xi_inp.in6p_laddr, 16);
 	    memcpy(entry->rmt_addr, &pcb.xi_inp.in6p_faddr, 16);
