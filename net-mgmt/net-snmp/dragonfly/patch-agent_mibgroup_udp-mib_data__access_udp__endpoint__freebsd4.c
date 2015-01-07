--- agent/mibgroup/udp-mib/data_access/udp_endpoint_freebsd4.c.orig	2012-10-09 22:28:58 UTC
+++ agent/mibgroup/udp-mib/data_access/udp_endpoint_freebsd4.c
@@ -153,7 +153,11 @@ _load(netsnmp_container *container, u_in
 #endif
 
 #if !defined(NETSNMP_ENABLE_IPV6)
+#ifdef in6p_vflag
         if (pcb.xi_inp.inp_vflag & INP_IPV6)
+#else
+	if (INP_ISIPV6(&(pcb.xi_inp)))
+#endif
 	    continue;
 #endif
 
@@ -169,7 +173,11 @@ _load(netsnmp_container *container, u_in
         entry->pid = 0;
         
         /** the addr string may need work */
+#ifdef in6p_vflag
 	if (pcb.xi_inp.inp_vflag & INP_IPV6) {
+#else
+	if (INP_ISIPV6(&(pcb.xi_inp))) {
+#endif
 	    entry->loc_addr_len = entry->rmt_addr_len = 16;
 	    memcpy(entry->loc_addr, &pcb.xi_inp.in6p_laddr, 16);
 	    memcpy(entry->rmt_addr, &pcb.xi_inp.in6p_faddr, 16);
