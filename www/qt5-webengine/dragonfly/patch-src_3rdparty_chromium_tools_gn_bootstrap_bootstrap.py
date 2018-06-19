--- src/3rdparty/chromium/tools/gn/bootstrap/bootstrap.py.intermediate	2018-05-26 13:48:34.000000000 +0000
+++ src/3rdparty/chromium/tools/gn/bootstrap/bootstrap.py
@@ -32,7 +32,7 @@ SRC_ROOT = os.path.dirname(os.path.dirna
 
 is_win = sys.platform.startswith('win')
 is_linux = sys.platform.startswith('linux')
-is_bsd = platform.system().lower().endswith('bsd')
+is_bsd = platform.system().lower().endswith('bsd') or platform.system().lower().startswith('dragonfly')
 is_mac = sys.platform.startswith('darwin')
 is_posix = is_linux or is_mac or is_bsd
 
