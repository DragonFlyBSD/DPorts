--- PyInstaller/compat.py.orig
+++ PyInstaller/compat.py
@@ -87,7 +87,8 @@
 is_linux = sys.platform.startswith('linux') or is_android  # For our intents and purposes, Android is also Linux.
 is_solar = sys.platform.startswith('sun')  # Solaris
 is_aix = sys.platform.startswith('aix')
-is_freebsd = sys.platform.startswith('freebsd')
+is_dragonfly = sys.platform.startswith('dragonfly')
+is_freebsd = sys.platform.startswith('freebsd') or is_dragonfly  # DragonFly is treated as FreeBSD.
 is_openbsd = sys.platform.startswith('openbsd')
 is_netbsd = sys.platform.startswith('netbsd')
 is_hpux = sys.platform.startswith('hp-ux')
