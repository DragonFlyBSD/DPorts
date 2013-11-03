--- smtpd/queue_fsqueue.c.orig	2013-06-04 08:13:28.000000000 +0000
+++ smtpd/queue_fsqueue.c
@@ -113,7 +113,8 @@ fsqueue_check_space(void)
 	else
 		used = 100;
 	if (100 - used < MINSPACE) {
-		log_warnx("warn: not enough disk space: %llu%% left", 100 - used);
+		log_warnx("warn: not enough disk space: %llu%% left",
+		    (long long unsigned int)(100 - used));
 		log_warnx("warn: temporarily rejecting messages");
 		return 0;
 	}
@@ -129,7 +130,8 @@ fsqueue_check_space(void)
 	else
 		used = 100;
 	if (100 - used < MININODES) {
-		log_warnx("warn: not enough inodes: %llu%% left", 100 - used);
+		log_warnx("warn: not enough inodes: %llu%% left",
+		    (long long unsigned int)(100 - used));
 		log_warnx("warn: temporarily rejecting messages");
 		return 0;
 	}
