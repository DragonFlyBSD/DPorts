--- PyInstaller/compat.py.orig	2019-07-09 19:14:04 UTC
+++ PyInstaller/compat.py
@@ -46,7 +46,8 @@ is_darwin = sys.platform == 'darwin'  #
 is_linux = sys.platform.startswith('linux')
 is_solar = sys.platform.startswith('sun')  # Solaris
 is_aix = sys.platform.startswith('aix')
-is_freebsd = sys.platform.startswith('freebsd')
+is_dragonfly = sys.platform.startswith('dragonfly')
+is_freebsd = sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly')
 is_hpux = sys.platform.startswith('hp-ux')
 
 # Some code parts are similar to several unix platforms
