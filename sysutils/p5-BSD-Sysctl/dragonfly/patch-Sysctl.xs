--- Sysctl.xs.orig	2014-01-21 23:02:47 UTC
+++ Sysctl.xs
@@ -8,7 +8,7 @@
 #include "XSUB.h"
 
 /* define _FreeBSD_version where applicable */
-#if __FreeBSD__ >= 2
+#if defined(__FreeBSD__) && __FreeBSD__ >= 2
 #include <osreldate.h>
 #endif
 
@@ -19,7 +19,10 @@
 #include <sys/time.h>       /* struct clockinfo */
 #include <sys/vmmeter.h>    /* struct vmtotal */
 #include <sys/resource.h>   /* struct loadavg */
-#if __FreeBSD_version < 1000000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 1000000) || defined(__DragonFly__)
+#if defined(__DragonFly__)
+#define _KERNEL_STRUCTURES
+#endif
 #include <sys/mbuf.h>       /* struct mbstat (opaque mib) */
 #endif
 #include <sys/timex.h>      /* struct ntptimeval (opaque mib) */
@@ -31,7 +34,7 @@
 #include <netinet/in_systm.h>
 #include <netinet/ip.h>
 #include <netinet/ip_icmp.h>
-#if __FreeBSD_version < 500000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 500000) || defined(__DragonFly__)
 #include <netinet/tcp.h>  /* struct tcpstat prerequisite */
 #endif
 
@@ -537,7 +540,7 @@
             break;
         }
         /* the remaining custom formats are for opaque mibs */
-#if __FreeBSD_version < 1000000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 1000000) || defined(__DragonFly__)
         case FMT_MBSTAT: {
             HV *c = (HV *)sv_2mortal((SV *)newHV());
             struct mbstat *inf = (struct mbstat *)buf;
@@ -550,12 +553,12 @@
             hv_store(c, "mbuflen",        7, newSVuv(inf->m_mlen), 0);
             hv_store(c, "mbufhead",       8, newSVuv(inf->m_mhlen), 0);
             hv_store(c, "drain",          5, newSVuv(inf->m_drain), 0);
-#if __FreeBSD_version < 500000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 500000) || defined(__DragonFly__)
             hv_store(c, "numtypes",       8, newSVpvn("", 0), 0);
 #else
             hv_store(c, "numtypes",       8, newSViv(inf->m_numtypes), 0);
 #endif
-#if __FreeBSD_version < 600000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 600000) || defined(__DragonFly__)
             hv_store(c, "mbufs",          5, newSVpvn("", 0), 0);
             hv_store(c, "mclusts",        7, newSVpvn("", 0), 0);
             hv_store(c, "sfallocwait",   11, newSVpvn("", 0), 0);
@@ -587,7 +590,7 @@
             RETVAL = newRV((SV *)c);
             hv_store(c, "devno",           5, newSViv(inf->device_number), 0);
             hv_store(c, "unitno",          6, newSViv(inf->unit_number), 0);
-#if __FreeBSD_version < 500000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 500000) || defined(__DragonFly__)
             hv_store(c, "sequence",        8, newSVpvn("", 0), 0);
             hv_store(c, "allocated",       9, newSVpvn("", 0), 0);
             hv_store(c, "startcount",     10, newSVpvn("", 0), 0);
@@ -604,7 +607,7 @@
 #endif
             break;
         }
-#if __FreeBSD_version >= 500000
+#if defined(__FreeBSD__) && __FreeBSD_version >= 500000
         case FMT_XVFSCONF: {
             HV *c = (HV *)sv_2mortal((SV *)newHV());
             struct xvfsconf *inf = (struct xvfsconf *)buf;
@@ -636,7 +639,7 @@
             HV *c = (HV *)sv_2mortal((SV *)newHV());
             struct igmpstat *inf = (struct igmpstat *)buf;
             RETVAL = newRV((SV *)c);
-#if __FreeBSD_version < 800070
+#if (defined(__FreeBSD__) && __FreeBSD_version < 800070) || defined(__DragonFly__)
             hv_store(c, "total",       5, newSVuv(inf->igps_rcv_total), 0);
             hv_store(c, "tooshort",    8, newSVuv(inf->igps_rcv_tooshort), 0);
             hv_store(c, "badsum",      6, newSVuv(inf->igps_rcv_badsum), 0);
@@ -672,7 +675,11 @@
         }
         case FMT_TCPSTAT: {
             HV *c = (HV *)sv_2mortal((SV *)newHV());
+#if defined(__DragonFly__)
+            struct tcp_stats *inf = (struct tcp_stats *)buf;
+#else
             struct tcpstat *inf = (struct tcpstat *)buf;
+#endif
             RETVAL = newRV((SV *)c);
             hv_store(c, "connattempt",      11, newSVuv(inf->tcps_connattempt), 0);
             hv_store(c, "accepts",           7, newSVuv(inf->tcps_accepts), 0);
@@ -751,7 +758,7 @@
             hv_store(c, "zonefail",          8, newSVuv(inf->tcps_sc_zonefail), 0);
             hv_store(c, "sendcookie",       10, newSVuv(inf->tcps_sc_sendcookie), 0);
             hv_store(c, "recvcookie",       10, newSVuv(inf->tcps_sc_recvcookie), 0);
-#if __FreeBSD_version < 500000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 500000) || defined(__DragonFly__)
             hv_store(c, "minmssdrops",      11, newSVpvn("", 0), 0);
             hv_store(c, "sendrexmitbad",    13, newSVpvn("", 0), 0);
             hv_store(c, "hostcacheadd",     12, newSVpvn("", 0), 0);
@@ -762,7 +769,7 @@
             hv_store(c, "hostcacheadd",     12, newSVuv(inf->tcps_hc_added), 0);
             hv_store(c, "hostcacheover",    13, newSVuv(inf->tcps_hc_bucketoverflow), 0);
 #endif
-#if __FreeBSD_version < 600000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 600000) || defined(__DragonFly__)
             hv_store(c, "badrst",            6, newSVpvn("", 0), 0);
             hv_store(c, "sackrecover",      11, newSVpvn("", 0), 0);
             hv_store(c, "sackrexmitsegs",   14, newSVpvn("", 0), 0);
