--- libide/ide-log.c.orig	2015-04-08 23:10:45.000000000 +0300
+++ libide/ide-log.c
@@ -24,7 +24,7 @@
 # include <sys/utsname.h>
 # include <sys/types.h>
 # include <sys/syscall.h>
-#elif defined __FreeBSD__ || defined __OpenBSD__
+#elif defined __FreeBSD__ || defined __OpenBSD__ || defined __DragonFly__
 # include <sys/utsname.h>
 #endif /* !__linux__ && !__FreeBSD__ && !__OpenBSD__ */
 
@@ -204,7 +204,7 @@ ide_log_init (gboolean     stdout_,
           g_ptr_array_add (channels, channel);
         }
 
-#if defined __linux__ || defined __FreeBSD__ || defined __OpenBSD__
+#if defined __linux__ || defined __FreeBSD__ || defined __OpenBSD__ || defined __DragonFly__
       uname (&u);
       memcpy (hostname, u.nodename, sizeof (hostname));
 #else
