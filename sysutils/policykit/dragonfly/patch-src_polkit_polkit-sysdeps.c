--- src/polkit/polkit-sysdeps.c.orig	2008-05-30 23:24:44.000000000 +0200
+++ src/polkit/polkit-sysdeps.c	2013-01-05 02:16:02.558419000 +0100
@@ -106,7 +106,7 @@
         }
         start_time = (unsigned long long) (info.pr_start.tv_sec);
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	filename = kit_strdup_printf ("/proc/%d/status", pid);
 #else
         filename = kit_strdup_printf ("/proc/%d/stat", pid);
@@ -121,7 +121,7 @@
                 goto out;
         }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         tokens = kit_strsplit (contents, ' ', &num_tokens);
         if (tokens == NULL)
                 goto out;
@@ -270,7 +270,7 @@
         ret = strlen (info.pr_psargs);
         strncpy (out_buf, info.pr_psargs, ret);
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	snprintf (proc_name, sizeof (proc_name), "/proc/%d/file", pid);
 #else
         snprintf (proc_name, sizeof (proc_name), "/proc/%d/exe", pid);
