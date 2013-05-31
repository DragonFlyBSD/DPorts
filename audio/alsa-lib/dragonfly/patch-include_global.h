--- include/global.h.intermediate	2013-05-31 08:45:36.000000000 +0000
+++ include/global.h
@@ -133,7 +133,7 @@ int snd_shm_area_destroy(struct snd_shm_
 
 int snd_user_file(const char *file, char **result);
 
-#if !defined(_POSIX_C_SOURCE) && !defined(_POSIX_SOURCE) && !defined(__FreeBSD__)
+#if !defined(_POSIX_C_SOURCE) && !defined(_POSIX_SOURCE) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 struct timeval {
 	time_t		tv_sec;		/* seconds */
 	long		tv_usec;	/* microseconds */
