--- agent/mibgroup/mibII/ipv6.c.orig	2012-10-09 22:28:58 UTC
+++ agent/mibgroup/mibII/ipv6.c
@@ -1416,7 +1416,11 @@ var_udp6(register struct variable * vp,
         if (in6pcb.in6p_af != AF_INET6)
             goto skip;
 #elif defined(freebsd3) || defined(darwin)
+#ifdef in6p_vflag
         if (0 == (in6pcb.inp_vflag & INP_IPV6))
+#else
+	if (INP_ISIPV6(&in6pcb) == 0)
+#endif
             goto skip;
 #elif defined(openbsd4)
 	if (!(in6pcb.inp_flags & INP_IPV6))
@@ -1862,7 +1866,11 @@ var_tcp6(register struct variable * vp,
         if (in6pcb.in6p_af != AF_INET6)
             goto skip;
 #elif defined(freebsd3) || defined(darwin)
+#ifdef in6p_vflag
         if (0 == (in6pcb.inp_vflag & INP_IPV6))
+#else
+        if (INP_ISIPV6(&in6pcb) == 0)
+#endif
             goto skip;
 #elif defined(openbsd4)
         if (0 == (in6pcb.inp_flags & INP_IPV6))
