--- xlock_check.c.orig	2006-05-30 06:56:10 UTC
+++ xlock_check.c
@@ -59,7 +59,7 @@ int sameuser(username,uid)
 
 #if defined(BSD_OS2)
 /* Return the uid of the given username */
-int getuid(username)
+int getuid_doinkd(username)
    char    *username;
 {
    struct passwd *pw;
@@ -193,7 +193,7 @@ time_t xlock_check(username)
 #ifndef KINFO_PROC_RUID
 #define KINFO_PROC_RUID 6
 #endif
-   PCB = kvm_getprocs(kd, KINFO_PROC_RUID, getuid(username), &numprocs);
+   PCB = kvm_getprocs(kd, KINFO_PROC_RUID, getuid_doinkd(username), &numprocs);
 
    for (i = 0; i < numprocs; i++)
 
