--- src/os-freebsd.c.orig	2019-02-12 20:05:17.500017000 +0100
+++ src/os-freebsd.c	2019-02-12 20:05:24.570146000 +0100
@@ -79,8 +79,13 @@
   pid = -1;
   for (i = 0, kv = (struct kinfo_proc *)buf; i < len / sizeof(*kv);
    i++, kv++) {
+#ifdef __DragonFly__
+    if (kv->kp_lwp.kl_tid == tid) {
+      pid = kv->kp_pid;
+#else
     if (kv->ki_tid == tid) {
       pid = kv->ki_pid;
+#endif
       break;
     }
   }
@@ -92,6 +97,9 @@
 tdep_get_elf_image (struct elf_image *ei, pid_t pid, unw_word_t ip,
                     unsigned long *segbase, unsigned long *mapoff, char *path, size_t pathlen)
 {
+#ifdef __DragonFly__
+  return -UNW_EUNSPEC;
+#else
   int mib[4], error, ret;
   size_t len, len1;
   char *buf, *bp, *eb;
@@ -142,4 +150,5 @@
   }
   free_mem(buf, len1);
   return (ret);
+#endif
 }
