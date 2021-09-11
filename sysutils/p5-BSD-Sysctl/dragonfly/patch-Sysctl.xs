--- Sysctl.xs.orig	2021-03-05 17:25:15 UTC
+++ Sysctl.xs
@@ -22,6 +22,10 @@
 #include <sys/time.h>       /* struct clockinfo */
 #include <sys/vmmeter.h>    /* struct vmtotal */
 #include <sys/resource.h>   /* struct loadavg */
+#if defined(__DragonFly__)
+#include <sys/sensors.h>
+#define _KERNEL_STRUCTURES
+#endif
 #include <sys/timex.h>      /* struct ntptimeval (opaque mib) */
 #include <sys/devicestat.h> /* struct devstat (opaque mib) */
 #include <sys/mount.h>      /* struct xvfsconf (opaque mib) */
@@ -474,6 +478,7 @@ _mib_lookup(const char *arg)
                 hv_store(c, name, strlen(name), newSVpvn(inf->device_name, strlen(inf->device_name)), 0);
                 strcpy(name, "#.unitno"); name[0] = *p;
                 hv_store(c, name, strlen(name), newSViv(inf->unit_number), 0);
+#ifndef __DragonFly__
                 strcpy(name, "#.sequence"); name[0] = *p;
                 hv_store(c, name, strlen(name), newSVuv(inf->sequence0), 0);
                 strcpy(name, "#.allocated"); name[0] = *p;
@@ -502,6 +507,7 @@ _mib_lookup(const char *arg)
                 hv_store(c, name, strlen(name), newSVuv(inf->operations[DEVSTAT_WRITE]), 0);
                 strcpy(name, "#.operations_free"); name[0] = *p;
                 hv_store(c, name, strlen(name), newSVuv(inf->operations[DEVSTAT_FREE]), 0);
+#endif
                 ++p;
                 ++inf;
             } while (inf < (struct devstat *)(buf + buflen));
@@ -509,7 +515,11 @@ _mib_lookup(const char *arg)
         }
         case CTLTYPE_XVFSCONF: {
             HV *c = (HV *)sv_2mortal((SV *)newHV());
+#ifndef __DragonFly__
             struct xvfsconf *inf = (struct xvfsconf *)buf;
+#else
+            struct vfsconf *inf = (struct vfsconf *)buf;
+#endif
             RETVAL = newRV((SV *)c);
             hv_store(c, "name",         4, newSVpv(inf->vfc_name, 0), 0);
             hv_store(c, "typenum",      7, newSViv(inf->vfc_typenum), 0);
@@ -540,28 +550,40 @@ _mib_lookup(const char *arg)
             /* Message statistics */
             hv_store(c, "total",             5, newSVuv(inf->igps_rcv_total), 0);
             hv_store(c, "tooshort",          8, newSVuv(inf->igps_rcv_tooshort), 0);
+#ifndef __DragonFly__
             hv_store(c, "badttl",            6, newSVuv(inf->igps_rcv_badttl), 0);
+#endif
             hv_store(c, "badsum",            6, newSVuv(inf->igps_rcv_badsum), 0);
             /* Query statistics */
+#ifndef __DragonFly__
             hv_store(c, "queries",           7, newSVuv(inf->igps_rcv_v1v2_queries + inf->igps_rcv_v3_queries), 0);
             hv_store(c, "v1v2_queries",     12, newSVuv(inf->igps_rcv_v1v2_queries), 0);
             hv_store(c, "v3_queries",       10, newSVuv(inf->igps_rcv_v3_queries), 0);
+#endif
             hv_store(c, "badqueries",       10, newSVuv(inf->igps_rcv_badqueries), 0);
+#ifndef __DragonFly__
             hv_store(c, "gen_queries",      11, newSVuv(inf->igps_rcv_gen_queries), 0);
             hv_store(c, "group_queries",    13, newSVuv(inf->igps_rcv_group_queries), 0);
             hv_store(c, "gsr_queries",      11, newSVuv(inf->igps_rcv_gsr_queries), 0);
             hv_store(c, "drop_gsr_queries", 16, newSVuv(inf->igps_drop_gsr_queries), 0);
+#endif
             /* Report statistics */
             hv_store(c, "reports",           7, newSVuv(inf->igps_rcv_reports), 0);
             hv_store(c, "badreports",       10, newSVuv(inf->igps_rcv_badreports), 0);
             hv_store(c, "ourreports",       10, newSVuv(inf->igps_rcv_ourreports), 0);
+#ifndef __DragonFly__
             hv_store(c, "nore",              4, newSVuv(inf->igps_rcv_nora), 0);
+#endif
             hv_store(c, "sent",              4, newSVuv(inf->igps_snd_reports), 0);
             break;
         }
         case CTLTYPE_TCPSTAT: {
             HV *c = (HV *)sv_2mortal((SV *)newHV());
+#ifndef __DragonFly__
             struct tcpstat *inf = (struct tcpstat *)buf;
+#else
+            struct tcp_stats *inf = (struct tcp_stats *)buf;
+#endif
             RETVAL = newRV((SV *)c);
             hv_store(c, "connattempt",      11, newSVuv(inf->tcps_connattempt), 0);
             hv_store(c, "accepts",           7, newSVuv(inf->tcps_accepts), 0);
@@ -641,6 +663,7 @@ _mib_lookup(const char *arg)
             hv_store(c, "sendcookie",       10, newSVuv(inf->tcps_sc_sendcookie), 0);
             hv_store(c, "recvcookie",       10, newSVuv(inf->tcps_sc_recvcookie), 0);
             hv_store(c, "minmssdrops",      11, newSVuv(inf->tcps_minmssdrops), 0);
+#ifndef __DragonFly__
             hv_store(c, "sendrexmitbad",    13, newSVuv(inf->tcps_sndrexmitbad), 0);
             hv_store(c, "hostcacheadd",     12, newSVuv(inf->tcps_hc_added), 0);
             hv_store(c, "hostcacheover",    13, newSVuv(inf->tcps_hc_bucketoverflow), 0);
@@ -651,6 +674,7 @@ _mib_lookup(const char *arg)
             hv_store(c, "sackrecv",          8, newSVuv(inf->tcps_sack_rcv_blocks), 0);
             hv_store(c, "sacksend",          8, newSVuv(inf->tcps_sack_send_blocks), 0);
             hv_store(c, "sackscorebover",   14, newSVuv(inf->tcps_sack_sboverflow), 0);
+#endif
             break;
         }
         case CTLTYPE_UDPSTAT: {
