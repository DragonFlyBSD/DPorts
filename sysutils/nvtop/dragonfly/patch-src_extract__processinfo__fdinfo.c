--- src/extract_processinfo_fdinfo.c.orig
+++ src/extract_processinfo_fdinfo.c
@@ -166,10 +166,12 @@
 
       // check if this fd refers to the same open file as any seen ones.
       // we only care about unique opens
+#ifdef SYS_kcmp
       for (unsigned i = 0; i < seen_fds_len; i++) {
         if (syscall(SYS_kcmp, client_pid, client_pid, KCMP_FILE, fd_num, seen_fds[i]) <= 0)
           goto next_fd;
       }
+#endif
 
       if (seen_fds_len == seen_fds_capacity) {
         seen_fds_capacity += DRM_FD_LINEAR_REALLOC_INC;
