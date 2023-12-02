--- setup.py.orig	2023-11-12 16:49:17.721874000 +0100
+++ setup.py	2023-11-12 16:51:30.774143000 +0100
@@ -154,6 +154,7 @@ INITSYS_FILES = {
 }
 INITSYS_ROOTS = {
     "sysvinit": "etc/rc.d/init.d",
+    "sysvinit_dragonfly": "usr/local/etc/rc.d",
     "sysvinit_freebsd": "usr/local/etc/rc.d",
     "sysvinit_netbsd": "usr/local/etc/rc.d",
     "sysvinit_deb": "etc/init.d",
@@ -295,7 +296,7 @@ data_files = [
         [f for f in glob("doc/examples/seed/*") if is_f(f)],
     ),
 ]
-if not platform.system().endswith("BSD"):
+if not platform.system().endswith("BSD") and not platform.system().endswith("DragonFly"):
     RULES_PATH = pkg_config_read("udev", "udevdir")
     if not in_virtualenv():
         RULES_PATH = "/" + RULES_PATH
