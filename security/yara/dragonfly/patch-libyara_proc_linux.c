--- libyara/proc/linux.c.orig	2017-11-10 11:21:21 UTC
+++ libyara/proc/linux.c
@@ -37,7 +37,7 @@ SOFTWARE, EVEN IF ADVISED OF THE POSSIBI
 #include <sys/wait.h>
 #include <errno.h>
 
-#if defined(__NetBSD__)
+#if defined(__NetBSD__) || defined __DragonFly__
 #define PTRACE_ATTACH PT_ATTACH
 #define PTRACE_DETACH PT_DETACH
 #define _XOPEN_SOURCE 500
