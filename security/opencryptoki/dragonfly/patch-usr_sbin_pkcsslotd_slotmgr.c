--- usr/sbin/pkcsslotd/slotmgr.c.orig	2026-10-26 02:22:43 UTC
+++ usr/sbin/pkcsslotd/slotmgr.c
@@ -728,7 +728,7 @@ int main(int argc, char *argv[], char *envp[])
      */
     if (Daemon) {
         pid_t pid;
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
         if ((pid = fork()) < 0) {
 #else
 	/* epoll emulation with kqueue requires sharing the fd table */
