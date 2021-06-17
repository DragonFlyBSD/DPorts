--- setup.py.orig	2021-06-15 18:09:33.497486000 +0200
+++ setup.py	2021-06-15 18:10:19.656427000 +0200
@@ -165,7 +165,7 @@
         else:
             # sles 12+ and openSUSE 13.2+ use systemd
             set_systemd_files(data_files, dest=systemd_dir_path)
-    elif name == 'freebsd':
+    elif name == 'freebsd' or name == 'dragonfly':
         set_conf_files(data_files, src=["config/freebsd/waagent.conf"])
         set_freebsd_rc_files(data_files)
     elif name == 'openbsd':
