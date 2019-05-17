--- Sysctl.xs.intermediate	2019-05-08 16:11:18 UTC
+++ Sysctl.xs
@@ -8,7 +8,7 @@
 #include "XSUB.h"
 
 /* define _FreeBSD_version where applicable */
-#if __FreeBSD__ >= 2
+#if defined(__FreeBSD__) && __FreeBSD__ >= 2
 #include <osreldate.h>
 #endif
 
@@ -20,7 +20,11 @@
 #include <sys/time.h>       /* struct clockinfo */
 #include <sys/vmmeter.h>    /* struct vmtotal */
 #include <sys/resource.h>   /* struct loadavg */
-#if __FreeBSD_version < 1000000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 1000000) || defined(__DragonFly__)
+#if defined(__DragonFly__)
+#include <sys/sensors.h>
+#define _KERNEL_STRUCTURES
+#endif
 #include <sys/mbuf.h>       /* struct mbstat (opaque mib) */
 #endif
 #include <sys/timex.h>      /* struct ntptimeval (opaque mib) */
@@ -32,7 +36,7 @@
 #include <netinet/in_systm.h>
 #include <netinet/ip.h>
 #include <netinet/ip_icmp.h>
-#if __FreeBSD_version < 500000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 500000) || defined(__DragonFly__)
 #include <netinet/tcp.h>  /* struct tcpstat prerequisite */
 #endif
 
@@ -238,6 +242,26 @@ _mib_info(const char *arg)
         case 'S': {
             if (strcmp(f,"S,clockinfo") == 0)    { fmt_type = FMT_CLOCKINFO; }
             else if (strcmp(f,"S,loadavg") == 0) { fmt_type = FMT_LOADAVG; }
+#ifdef __DragonFly__
+            else if (strcmp(f,"S,timespec") == 0) { fmt_type = FMT_TIMESPEC; }
+            else if (strcmp(f,"S,sensor") == 0)   { fmt_type = FMT_SENSOR; }
+            else if (strcmp(f,"S,vmmeter") == 0)  { fmt_type = FMT_VMMETER; }
+            else if (strcmp(f,"S,vmstats") == 0)  { fmt_type = FMT_VMSTATS; }
+            else if (strcmp(f,"S,xtcpcb") == 0)   { fmt_type = FMT_XTCPCB; }
+            else if (strcmp(f,"S,xunpcb") == 0)   { fmt_type = FMT_XUNPCB; }
+
+            else if (strcmp(f,"S,ip_stats") == 0)  { fmt_type = FMT_IP_STATS; }
+            else if (strcmp(f,"S,tcp_stats") == 0) { fmt_type = FMT_TCP_STATS; }
+            else if (strcmp(f,"S,carpstats") == 0)    { fmt_type = FMT_CARPSTATS; }
+            else if (strcmp(f,"S,rtstatistics") == 0) { fmt_type = FMT_RTSTATISTICS; }
+
+            else if (strcmp(f,"S,nchstats") == 0)      { fmt_type = FMT_NCHSTATS; }
+            else if (strcmp(f,"S,cryptostats") == 0)   { fmt_type = FMT_CRYPTOSTATS; }
+            else if (strcmp(f,"S,tty") == 0)           { fmt_type = FMT_TTY; }
+            else if (strcmp(f,"S,file") == 0)          { fmt_type = FMT_FILE; }
+            else if (strcmp(f,"S,proc") == 0)          { fmt_type = FMT_PROC; }
+            else if (strcmp(f,"S,kinfo_cputime") == 0) { fmt_type = FMT_KINFO_CPUTIME; }
+#endif
             else if (strcmp(f,"S,timeval") == 0) { fmt_type = FMT_TIMEVAL; }
             else if (strcmp(f,"S,vmtotal") == 0) { fmt_type = FMT_VMTOTAL; }
             /* now the opaque OIDs */
@@ -264,6 +288,9 @@ _mib_info(const char *arg)
             if (strcmp(f,"T,struct cdev *") == 0) {
                 fmt_type = FMT_STRUCT_CDEV;
             }
+            else if (strcmp(f,"T,udev_t") == 0) {
+                fmt_type = FMT_UDEV_T;
+            }
             else {
                 /* bleah */
             }
@@ -517,6 +544,35 @@ _mib_lookup(const char *arg)
             av_store(c, 2, newSVnv((double)inf->ldavg[2]/scale));
             break;
         }
+#ifdef __DragonFly__
+        case FMT_TIMESPEC: {
+            struct timespec *inf = (struct timespec *)buf;
+            RETVAL = newSVnv(
+                (double)inf->tv_sec + ((double)inf->tv_nsec/1000000000)
+            );
+            break;
+        }
+        case FMT_SENSOR: {
+            struct sensor *inf = (struct sensor *)buf;
+            switch(inf->type) {
+            case SENSOR_TEMP:
+              RETVAL = newSVnv(
+                  (double)(inf->value - 273150000) / 1000000.0
+              );
+              break;
+            case SENSOR_WATTS:
+              RETVAL = newSVnv(
+                  (double)(inf->value / 1000000.0)
+              );
+              break;
+            default:
+               warn("unhandled sensor type");
+               XSRETURN_UNDEF;
+               break;
+           }
+           break;
+        }
+#endif
         case FMT_TIMEVAL: {
             struct timeval *inf = (struct timeval *)buf;
             RETVAL = newSVnv(
@@ -525,7 +581,7 @@ _mib_lookup(const char *arg)
             break;
         }
         /* the remaining custom formats are for opaque mibs */
-#if __FreeBSD_version < 1000000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 1000000) || defined(__DragonFly__)
         case FMT_MBSTAT: {
             HV *c = (HV *)sv_2mortal((SV *)newHV());
             struct mbstat *inf = (struct mbstat *)buf;
@@ -538,12 +594,12 @@ _mib_lookup(const char *arg)
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
@@ -582,6 +638,7 @@ _mib_lookup(const char *arg)
                 hv_store(c, name, strlen(name), newSVpvn(inf->device_name, strlen(inf->device_name)), 0);
                 strcpy(name, "#.unitno"); name[0] = *p;
                 hv_store(c, name, strlen(name), newSViv(inf->unit_number), 0);
+#ifdef __FreeBSD__
 #if __FreeBSD_version < 500000
                 strcpy(name, "#.sequence"); name[0] = *p;
                 hv_store(c, name, strlen(name), newSVpvn("", 0)), 0);
@@ -641,12 +698,13 @@ _mib_lookup(const char *arg)
                 strcpy(name, "#.operations_free"); name[0] = *p;
                 hv_store(c, name, strlen(name), newSVuv(inf->operations[DEVSTAT_FREE]), 0);
 #endif
+#endif
                 ++p;
                 ++inf;
             } while (inf < (struct devstat *)(buf + buflen));
             break;
         }
-#if __FreeBSD_version >= 500000
+#if defined(__FreeBSD__) && __FreeBSD_version >= 500000
         case FMT_XVFSCONF: {
             HV *c = (HV *)sv_2mortal((SV *)newHV());
             struct xvfsconf *inf = (struct xvfsconf *)buf;
@@ -678,7 +736,7 @@ _mib_lookup(const char *arg)
             HV *c = (HV *)sv_2mortal((SV *)newHV());
             struct igmpstat *inf = (struct igmpstat *)buf;
             RETVAL = newRV((SV *)c);
-#if __FreeBSD_version < 800070
+#if (defined(__FreeBSD__) && __FreeBSD_version < 800070) || defined(__DragonFly__)
             hv_store(c, "total",       5, newSVuv(inf->igps_rcv_total), 0);
             hv_store(c, "tooshort",    8, newSVuv(inf->igps_rcv_tooshort), 0);
             hv_store(c, "badsum",      6, newSVuv(inf->igps_rcv_badsum), 0);
@@ -714,7 +772,11 @@ _mib_lookup(const char *arg)
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
@@ -793,7 +855,7 @@ _mib_lookup(const char *arg)
             hv_store(c, "zonefail",          8, newSVuv(inf->tcps_sc_zonefail), 0);
             hv_store(c, "sendcookie",       10, newSVuv(inf->tcps_sc_sendcookie), 0);
             hv_store(c, "recvcookie",       10, newSVuv(inf->tcps_sc_recvcookie), 0);
-#if __FreeBSD_version < 500000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 500000) || defined(__DragonFly__)
             hv_store(c, "minmssdrops",      11, newSVpvn("", 0), 0);
             hv_store(c, "sendrexmitbad",    13, newSVpvn("", 0), 0);
             hv_store(c, "hostcacheadd",     12, newSVpvn("", 0), 0);
@@ -804,7 +866,7 @@ _mib_lookup(const char *arg)
             hv_store(c, "hostcacheadd",     12, newSVuv(inf->tcps_hc_added), 0);
             hv_store(c, "hostcacheover",    13, newSVuv(inf->tcps_hc_bucketoverflow), 0);
 #endif
-#if __FreeBSD_version < 600000
+#if (defined(__FreeBSD__) && __FreeBSD_version < 600000) || defined(__DragonFly__)
             hv_store(c, "badrst",            6, newSVpvn("", 0), 0);
             hv_store(c, "sackrecover",      11, newSVpvn("", 0), 0);
             hv_store(c, "sackrexmitsegs",   14, newSVpvn("", 0), 0);
@@ -894,6 +956,23 @@ _mib_lookup(const char *arg)
         case FMT_NFSRVSTATS:
         case FMT_NFSSTATS:
         case FMT_XINPCB:
+#ifdef __DragonFly__
+        case FMT_VMMETER:
+        case FMT_VMSTATS:
+        case FMT_XTCPCB:
+        case FMT_XUNPCB:
+        case FMT_IP_STATS:
+        case FMT_TCP_STATS:
+        case FMT_CARPSTATS:
+        case FMT_RTSTATISTICS:
+        case FMT_NCHSTATS:
+        case FMT_CRYPTOSTATS:
+        case FMT_KINFO_CPUTIME:
+        case FMT_TTY:
+        case FMT_FILE:
+        case FMT_PROC:
+        case FMT_UDEV_T:
+#endif
         case FMT_STRUCT_CDEV:
             /* don't know how to interpret the results */
             SvREFCNT_dec(sv_buf);
