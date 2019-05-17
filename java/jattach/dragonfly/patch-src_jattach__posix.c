--- src/jattach_posix.c.orig	2019-01-08 20:59:18 UTC
+++ src/jattach_posix.c
@@ -227,8 +227,13 @@ int get_process_info(int pid, uid_t* uid
         return 0;
     }
 
+#ifdef __DragonFly__
+    *uid = info.kp_uid;
+    *gid = info.kp_groups[0];
+#else
     *uid = info.ki_uid;
     *gid = info.ki_groups[0];
+#endif
     *nspid = pid;
     return 1;
 }
