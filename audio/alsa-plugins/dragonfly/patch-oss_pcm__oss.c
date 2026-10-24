--- oss/pcm_oss.c.intermediate	2026-09-05 00:13:05 UTC
+++ oss/pcm_oss.c
@@ -73,7 +73,7 @@ static snd_pcm_sframes_t oss_write(snd_pcm_ioplug_t *i
 	buf = (char *)areas->addr + (areas->first + areas->step * offset) / 8;
 	size *= oss->frame_bytes;
 	result = write(oss->fd, buf, size);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	if (result == -1) {
 		if (errno == EAGAIN)
 			return 0;
@@ -104,7 +104,7 @@ static snd_pcm_sframes_t oss_read(snd_pcm_ioplug_t *io
 	buf = (char *)areas->addr + (areas->first + areas->step * offset) / 8;
 	size *= oss->frame_bytes;
 	result = read(oss->fd, buf, size);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	if (result == -1) {
 		if (errno == EAGAIN)
 			return 0;
@@ -213,7 +213,7 @@ static int oss_start(snd_pcm_ioplug_t *io)
 #endif
 	if (ioctl(oss->fd, SNDCTL_DSP_SETTRIGGER, &tmp) < 0) {
 		fprintf(stderr, "*** OSS: trigger failed\n");
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		return -EINVAL;
 #else
 		if (io->stream == SND_PCM_STREAM_CAPTURE)
@@ -420,7 +420,7 @@ static int oss_hw_params(snd_pcm_ioplug_t *io,
 
 static int oss_hw_constraint(snd_pcm_oss_t *oss)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	snd_pcm_ioplug_t *io = &oss->io; 
 	static const snd_pcm_access_t access_list[] = {
 		SND_PCM_ACCESS_RW_INTERLEAVED,
