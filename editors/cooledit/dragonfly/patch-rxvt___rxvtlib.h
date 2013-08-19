--- rxvt/_rxvtlib.h.intermediate	2013-08-19 16:08:06.171556000 +0000
+++ rxvt/_rxvtlib.h
@@ -128,7 +128,7 @@
 #ifdef TTY_GID_SUPPORT
 # include <grp.h>
 #endif
-#if defined(PTYS_ARE_PTMX) && !defined(__FreeBSD__)
+#if defined(PTYS_ARE_PTMX) && !(defined(__FreeBSD__) || defined(__DragonFly__))
 # include <sys/resource.h>	/* for struct rlimit */
 # include <sys/stropts.h>	/* for I_PUSH */
 #endif
