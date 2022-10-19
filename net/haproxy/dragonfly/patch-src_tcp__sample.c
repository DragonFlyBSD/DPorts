--- src/tcp_sample.c.orig	2022-10-19 21:18:24.829450000 +0200
+++ src/tcp_sample.c	2022-10-19 21:20:01.167257000 +0200
@@ -357,7 +357,7 @@
 	case 5:  smp->data.u.sint = info.tcpi_retrans;        break;
 	case 6:  smp->data.u.sint = info.tcpi_fackets;        break;
 	case 7:  smp->data.u.sint = info.tcpi_reordering;     break;
-# elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+# elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 	/* the ones are found on FreeBSD, NetBSD and OpenBSD featuring TCP_INFO */
 	case 2:  smp->data.u.sint = info.__tcpi_unacked;      break;
 	case 3:  smp->data.u.sint = info.__tcpi_sacked;       break;
@@ -401,7 +401,7 @@
 	return 1;
 }
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 /* get the unacked counter on a client connection */
 static int
 smp_fetch_fc_unacked(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -412,7 +412,7 @@
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 /* get the sacked counter on a client connection */
 static int
 smp_fetch_fc_sacked(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -423,7 +423,7 @@
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 /* get the lost counter on a client connection */
 static int
 smp_fetch_fc_lost(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -434,7 +434,7 @@
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 /* get the retrans counter on a client connection */
 static int
 smp_fetch_fc_retrans(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -445,7 +445,7 @@
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 /* get the fackets counter on a client connection */
 static int
 smp_fetch_fc_fackets(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -456,7 +456,7 @@
 }
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 /* get the reordering counter on a client connection */
 static int
 smp_fetch_fc_reordering(const struct arg *args, struct sample *smp, const char *kw, void *private)
@@ -497,22 +497,22 @@
 #ifdef TCP_INFO
 	{ "fc_rtt",           smp_fetch_fc_rtt,           ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
 	{ "fc_rttvar",        smp_fetch_fc_rttvar,        ARG1(0,STR), val_fc_time_value, SMP_T_SINT, SMP_USE_L4CLI },
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 	{ "fc_unacked",       smp_fetch_fc_unacked,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 	{ "fc_sacked",        smp_fetch_fc_sacked,        ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 	{ "fc_retrans",       smp_fetch_fc_retrans,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 	{ "fc_fackets",       smp_fetch_fc_fackets,       ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 	{ "fc_lost",          smp_fetch_fc_lost,          ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 	{ "fc_reordering",    smp_fetch_fc_reordering,    ARG1(0,STR), var_fc_counter, SMP_T_SINT, SMP_USE_L4CLI },
 #endif
 #endif // TCP_INFO
