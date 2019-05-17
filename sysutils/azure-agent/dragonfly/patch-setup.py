--- setup.py.intermediate	2019-04-07 10:21:37 UTC
+++ setup.py
@@ -144,7 +144,7 @@ def get_data_files(name, version, fullna
         else:
             # sles 12+ and openSUSE 13.2+ use systemd
             set_systemd_files(data_files, dest='/usr/lib/systemd/system')
-    elif name == 'freebsd':
+    elif name == 'freebsd' or 'dragonfly':
         set_bin_files(data_files, dest="/usr/local/sbin")
 #        set_conf_files(data_files, src=["config/freebsd/waagent.conf"])
         set_freebsd_rc_files(data_files)
