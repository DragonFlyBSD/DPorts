--- plugins/linux-v4l2/v4l2-input.c.orig	2023-06-18 22:05:22 UTC
+++ plugins/linux-v4l2/v4l2-input.c
@@ -357,7 +357,7 @@ static void v4l2_device_list(obs_propert
 	size_t cur_device_index;
 	const char *cur_device_name;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	dirp = opendir("/dev");
 #else
 	dirp = opendir("/sys/class/video4linux");
@@ -377,7 +377,7 @@ static void v4l2_device_list(obs_propert
 		uint32_t caps;
 		struct v4l2_capability video_cap;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		if (strstr(dp->d_name, "video") == NULL)
 			continue;
 #endif
