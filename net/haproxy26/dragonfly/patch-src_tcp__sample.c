--- src/tcp_sample.c.orig	2023-06-09 07:32:37 UTC
+++ src/tcp_sample.c
@@ -357,7 +357,7 @@ static inline int get_tcp_info(const str
 	case 5:  smp->data.u.sint = info.tcpi_retrans;        break;
 	case 6:  smp->data.u.sint = info.tcpi_fackets;        break;
 	case 7:  smp->data.u.sint = info.tcpi_reordering;     break;
-# elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+# elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	/* the ones are found on FreeBSD, NetBSD and OpenBSD featuring TCP_INFO */
 	case 2:  smp->data.u.sint = info.__tcpi_unacked;      break;
 	case 3:  smp->data.u.sint = info.__tcpi_sacked;       break;
@@ -401,7 +401,8 @@ smp_fetch_fc_rttvar(const struct arg *ar
 	return 1;
 }
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || \
+    defined(__DragonFly__)
 /* get the unacked counter on a client connection */
 static int
 smp_fetch_fc_unacked(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -412,7 +413,7 @@ smp_fetch_fc_unacked(const struct arg *a
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 /* get the sacked counter on a client connection */
 static int
 smp_fetch_fc_sacked(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -423,7 +424,8 @@ smp_fetch_fc_sacked(const struct arg *ar
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || \
+    defined(__DragonFly__)
 /* get the lost counter on a client connection */
 static int
 smp_fetch_fc_lost(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -434,7 +436,8 @@ smp_fetch_fc_lost(const struct arg *args
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || \
+    defined(__DragonFly__)
 /* get the retrans counter on a client connection */
 static int
 smp_fetch_fc_retrans(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -445,7 +448,7 @@ smp_fetch_fc_retrans(const struct arg *a
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 /* get the fackets counter on a client connection */
 static int
 smp_fetch_fc_fackets(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -456,7 +459,7 @@ smp_fetch_fc_fackets(const struct arg *a
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 /* get the reordering counter on a client connection */
 static int
 smp_fetch_fc_reordering(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -497,22 +500,22 @@ static struct sample_fetch_kw_list sampl
 #ifdef TCP_INFO
 	{ "fc_rtt",           smp_fetch_fc_rtt,           ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
 	{ "fc_rttvar",        smp_fetch_fc_rttvar,        ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 	{ "fc_unacked",       smp_fetch_fc_unacked,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	{ "fc_sacked",        smp_fetch_fc_sacked,        ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) | defined(__DragonFly__)
 	{ "fc_retrans",       smp_fetch_fc_retrans,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	{ "fc_fackets",       smp_fetch_fc_fackets,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 	{ "fc_lost",          smp_fetch_fc_lost,          ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	{ "fc_reordering",    smp_fetch_fc_reordering,    ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
 #endif // TCP_INFO
