--- src/slurmd/slurmstepd/req.c.orig	2019-07-11 00:40:34 UTC
+++ src/slurmd/slurmstepd/req.c
@@ -465,7 +465,7 @@ static void *_handle_accept(void *arg)
 		g_slurm_auth_destroy(auth_cred);
 		FREE_NULL_BUFFER(buffer);
 	} else if (req >= SLURM_MIN_PROTOCOL_VERSION) {
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 		gid_t tmp_gid;
 
 		rc = getpeereid(fd, &uid, &tmp_gid);
