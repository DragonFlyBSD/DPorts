--- biosig4c++/t220/sopen_scp_write.c.orig	2026-10-23 00:00:00 UTC
+++ biosig4c++/t220/sopen_scp_write.c
@@ -388,7 +388,7 @@
 			// Tag 25 (len = 4)
 			if (VERBOSE_LEVEL>7) fprintf(stdout,"Section 1 Tag 25 \n");
 
-#if __FreeBSD__ || __APPLE__ || __NetBSD__
+#if __FreeBSD__ || __APPLE__ || __NetBSD__ || __DragonFly__
 			T0_tm = gdf_time2tm_time(hdr->T0);
 			T0_tm->tm_gmtoff = hdr->tzmin*60;
 #else
@@ -733,7 +733,7 @@
 			PtrCurSect[9] = (uint8_t)bps;
 
 			// Recording Date and Time
-#if __FreeBSD__ || __APPLE__ || __NetBSD__
+#if __FreeBSD__ || __APPLE__ || __NetBSD__ || __DragonFly__
 			T0_tm = gdf_time2tm_time(hdr->T0);
 			T0_tm->tm_gmtoff = hdr->tzmin*60;
 #else
