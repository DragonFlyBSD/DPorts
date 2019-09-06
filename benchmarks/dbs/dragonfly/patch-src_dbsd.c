--- src/dbsd.c.intermediate	2019-09-05 07:48:37.000000000 +0000
+++ src/dbsd.c
@@ -1005,7 +1005,7 @@ struct timeval origin_time;
 	    d[i].snd_max      = htonl((int)rt.d[i].td_cb.snd_max);
 	    d[i].snd_cwnd     = htonl((int)rt.d[i].td_cb.snd_cwnd);
 	    d[i].snd_ssthresh = htonl((int)rt.d[i].td_cb.snd_ssthresh);
-#if !defined(__FreeBSD_version) || (__FreeBSD_version < 400009)
+#if !defined(__FreeBSD_version) && !defined(__DragonFly__)
 	    d[i].t_idle       = htonl((int)rt.d[i].td_cb.t_idle);
 	    d[i].t_rtt        = htonl((int)rt.d[i].td_cb.t_rtt);
 #else
