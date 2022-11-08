--- src/tcp_sample.c.orig	2022-10-20 16:54:17.890634000 +0200
+++ src/tcp_sample.c	2022-10-20 16:54:29.410372000 +0200
@@ -348,7 +348,7 @@
 	case 5:  smp->data.u.sint = info.tcpi_retrans;        break;
 	case 6:  smp->data.u.sint = info.tcpi_fackets;        break;
 	case 7:  smp->data.u.sint = info.tcpi_reordering;     break;
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
 	/* the ones are found on FreeBSD and NetBSD featuring TCP_INFO */
 	case 2:  smp->data.u.sint = info.__tcpi_unacked;      break;
 	case 3:  smp->data.u.sint = info.__tcpi_sacked;       break;
@@ -391,7 +391,7 @@
 	return 1;
 }
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
 
 /* get the unacked counter on a client connection */
 static int
@@ -478,7 +478,7 @@
 #ifdef TCP_INFO
 	{ "fc_rtt",           smp_fetch_fc_rtt,           ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
 	{ "fc_rttvar",        smp_fetch_fc_rttvar,        ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
 	{ "fc_unacked",       smp_fetch_fc_unacked,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 	{ "fc_sacked",        smp_fetch_fc_sacked,        ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 	{ "fc_retrans",       smp_fetch_fc_retrans,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
