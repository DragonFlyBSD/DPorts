--- agent/mibgroup/mibII/ipv6.c.intermediate	2025-01-07 12:01:56 UTC
+++ agent/mibgroup/mibII/ipv6.c
@@ -1510,7 +1510,7 @@ var_udp6(register struct variable * vp,
     int             result;
     int             i, j;
     caddr_t         p;
-#if defined(openbsd4)
+#if defined(openbsd4) || defined(dragonfly)
     static struct inpcb in6pcb, savpcb;
 #elif defined(freebsd3)
     static struct xinpcb in6pcb, savpcb;
@@ -1612,7 +1612,7 @@ var_udp6(register struct variable * vp,
         ) {
         DEBUGMSGTL(("mibII/ipv6", "looping: p=%p\n", p));
 
-#if defined(freebsd3)
+#if defined(freebsd3) &&!defined(dragonfly)
 	in6pcb = *(struct xinpcb *) xig;
 #elif defined(darwin)
 	in6pcb = ((struct xinpcb *) xig)->xi_inp;
@@ -2106,7 +2106,7 @@ var_tcp6(register struct variable * vp,
     int             result;
     int             i, j;
     caddr_t         p;
-#if defined(openbsd4)
+#if defined(openbsd4) || defined(dragonfly)
     static struct inpcb in6pcb, savpcb;
 #elif defined(freebsd3)
     static struct xinpcb in6pcb;
@@ -2114,7 +2114,7 @@ var_tcp6(register struct variable * vp,
 #else
     static struct in6pcb in6pcb, savpcb;
 #endif
-#if !defined(freebsd3)
+#if !defined(freebsd3) || defined(dragonfly)
     struct tcpcb    tcpcb;
 #endif
     int             state;
@@ -2211,10 +2211,10 @@ var_tcp6(register struct variable * vp,
         ) {
         DEBUGMSGTL(("mibII/ipv6", "looping: p=%p\n", p));
 
-#if defined(freebsd3)
-	in6pcb = ((struct xtcpcb *) xig)->xt_inp;
-#elif defined(dragonfly)
+#if defined(dragonfly)
 	in6pcb = xtp->xt_inp;
+#elif defined(freebsd3)
+	in6pcb = ((struct xtcpcb *) xig)->xt_inp;
 #elif defined(darwin)
         in6pcb = ((struct xinpcb *) xig)->xi_inp;
 #else
@@ -2297,7 +2297,7 @@ var_tcp6(register struct variable * vp,
 #endif
         result = snmp_oid_compare(name, *length, newname, j);
         if (exact && (result == 0)) {
-#if defined(freebsd3)
+#if defined(freebsd3) && !defined(dragonfly)
                 savstate = ((struct xtcpcb *) xig)->t_state;
 #else
                 memcpy(&savpcb, &in6pcb, sizeof(savpcb));
@@ -2312,7 +2312,7 @@ var_tcp6(register struct variable * vp,
              */
             if ((savnameLen == 0) ||
               (snmp_oid_compare(savname, savnameLen, newname, j) > 0)) {
-#if defined(freebsd3)
+#if defined(freebsd3) && !defined(dragonfly)
                 savstate = ((struct xtcpcb *) xig)->t_state;
 #else
                 memcpy(&savpcb, &in6pcb, sizeof(savpcb));
@@ -2355,7 +2355,7 @@ var_tcp6(register struct variable * vp,
         return NULL;
     *length = savnameLen;
     memcpy((char *) name, (char *) savname, *length * sizeof(oid));
-#if defined(freebsd3)
+#if defined(freebsd3) && !defined(dragonfly)
     state = savstate;
 #elif defined(__NetBSD__) && __NetBSD_Version__ >= 999010400
     memcpy(&in6pcb, &savpcb, sizeof(savpcb));
