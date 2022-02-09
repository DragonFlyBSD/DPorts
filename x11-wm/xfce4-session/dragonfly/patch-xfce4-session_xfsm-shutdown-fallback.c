--- xfce4-session/xfsm-shutdown-fallback.c.orig	2020-11-06 23:08:55 UTC
+++ xfce4-session/xfsm-shutdown-fallback.c
@@ -72,6 +72,7 @@
 #include <xfce4-session/xfce-screensaver.h>
 
 #if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#include <sys/sysctl.h>
 #define __BACKEND_TYPE_BSD__ 1
 #ifdef HAVE_SYS_SYSCTL_H
 #include <sys/sysctl.h>
@@ -127,7 +128,7 @@ freebsd_supports_sleep_state (const gcha
   gboolean ret = FALSE;
   gchar *sleep_states;
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   gboolean status;
   gint v;
   size_t value_len = sizeof(int);
@@ -140,7 +141,7 @@ freebsd_supports_sleep_state (const gcha
           ret = TRUE;
     }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   /* On FreeBSD, S4 is not supported unless S4BIOS is available.
    * If S4 will ever be implemented on FreeBSD, we can disable S4bios
    * check below, using #if __FreeBSD_version >= XXXXXX.
