--- agent/mibgroup/mibII/tcpTable.c.intermediate	2015-01-07 02:09:11 UTC
+++ agent/mibgroup/mibII/tcpTable.c
@@ -904,7 +904,11 @@ tcpTable_load(netsnmp_cache *cache, void
         memcpy(&(nnew->pcb), &(((NS_ELEM *) xig)->xt_inp),
                            sizeof(struct inpcb));
 
+#ifdef in6p_vflag
 	if (nnew->pcb.inp_vflag & INP_IPV6)
+#else
+	if (INP_ISIPV6(&(nnew->pcb)))
+#endif
 	    free(nnew);
 	else {
 	    nnew->inp_next = tcp_head;
