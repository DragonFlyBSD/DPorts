--- src/posix/psutil.c.orig	2021-08-11 00:01:45 UTC
+++ src/posix/psutil.c
@@ -227,8 +227,13 @@ int get_process_info(int pid, uid_t* uid
         return -1;
     }
 
+#ifdef __DragonFly__
+    *uid = info.kp_uid;
+    *gid = info.kp_groups[0];
+#else
     *uid = info.ki_uid;
     *gid = info.ki_groups[0];
+#endif
     *nspid = pid;
     return 0;
 }
