--- src/tcp_sample.c.orig	2022-06-21 14:16:14 UTC
+++ src/tcp_sample.c
@@ -357,7 +357,7 @@ static inline int get_tcp_info(const str
 	case 5:  smp->data.u.sint = info.tcpi_retrans;        break;
 	case 6:  smp->data.u.sint = info.tcpi_fackets;        break;
 	case 7:  smp->data.u.sint = info.tcpi_reordering;     break;
-# elif defined(__FreeBSD__) || defined(__NetBSD__)
+# elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	/* the ones are found on FreeBSD and NetBSD featuring TCP_INFO */
 	case 2:  smp->data.u.sint = info.__tcpi_unacked;      break;
 	case 3:  smp->data.u.sint = info.__tcpi_sacked;       break;
@@ -373,7 +373,7 @@ static inline int get_tcp_info(const str
 	return 1;
 }
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 /* get the mean rtt of a client connection */
 static int
 smp_fetch_fc_rtt(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -389,7 +389,7 @@ smp_fetch_fc_rtt(const struct arg *args,
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 /* get the variance of the mean rtt of a client connection */
 static int
 smp_fetch_fc_rttvar(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -406,7 +406,7 @@ smp_fetch_fc_rttvar(const struct arg *ar
 #endif
 
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 /* get the unacked counter on a client connection */
 static int
 smp_fetch_fc_unacked(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -417,7 +417,7 @@ smp_fetch_fc_unacked(const struct arg *a
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 /* get the sacked counter on a client connection */
 static int
 smp_fetch_fc_sacked(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -428,7 +428,7 @@ smp_fetch_fc_sacked(const struct arg *ar
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 /* get the lost counter on a client connection */
 static int
 smp_fetch_fc_lost(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -439,7 +439,7 @@ smp_fetch_fc_lost(const struct arg *args
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 /* get the retrans counter on a client connection */
 static int
 smp_fetch_fc_retrans(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -450,7 +450,7 @@ smp_fetch_fc_retrans(const struct arg *a
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 /* get the fackets counter on a client connection */
 static int
 smp_fetch_fc_fackets(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -461,7 +461,7 @@ smp_fetch_fc_fackets(const struct arg *a
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 /* get the reordering counter on a client connection */
 static int
 smp_fetch_fc_reordering(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -502,22 +502,22 @@ static struct sample_fetch_kw_list sampl
 #ifdef TCP_INFO
 	{ "fc_rtt",           smp_fetch_fc_rtt,           ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
 	{ "fc_rttvar",        smp_fetch_fc_rttvar,        ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 	{ "fc_unacked",       smp_fetch_fc_unacked,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	{ "fc_sacked",        smp_fetch_fc_sacked,        ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 	{ "fc_retrans",       smp_fetch_fc_retrans,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	{ "fc_fackets",       smp_fetch_fc_fackets,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 	{ "fc_lost",          smp_fetch_fc_lost,          ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	{ "fc_reordering",    smp_fetch_fc_reordering,    ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
 #endif // TCP_INFO
