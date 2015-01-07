--- agent/mibgroup/tcp-mib/data_access/tcpConn_freebsd4.c.orig	2012-10-09 22:28:58 UTC
+++ agent/mibgroup/tcp-mib/data_access/tcpConn_freebsd4.c
@@ -181,7 +181,11 @@ _load(netsnmp_container *container, u_in
 	}
 
 #if !defined(NETSNMP_ENABLE_IPV6)
+#ifdef in6p_vflag
 	if (pcb.xt_inp.inp_vflag & INP_IPV6)
+#else
+	if (INP_ISIPV6(&(pcb.xt_inp)))
+#endif
 	    continue;
 #endif
 
@@ -198,7 +202,11 @@ _load(netsnmp_container *container, u_in
         entry->pid = 0;
         
         /** the addr string may need work */
+#ifdef in6p_vflag
 	if (pcb.xt_inp.inp_vflag & INP_IPV6) {
+#else
+	if (INP_ISIPV6(&(pcb.xt_inp))) {
+#endif
 	    entry->loc_addr_len = entry->rmt_addr_len = 16;
 	    memcpy(entry->loc_addr, &pcb.xt_inp.in6p_laddr, 16);
 	    memcpy(entry->rmt_addr, &pcb.xt_inp.in6p_faddr, 16);
