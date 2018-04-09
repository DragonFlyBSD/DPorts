--- setup/build_environment.py.orig	2018-04-09 16:44:19 UTC
+++ setup/build_environment.py
@@ -96,10 +96,8 @@ pyqt['sip_flags'] = PYQT_CONFIGURATION['
 def get_sip_dir():
     if iswindows:
         q = os.path.join(sys.prefix, 'share', 'sip')
-    elif isfreebsd:
-        q = os.path.join(sys.prefix, 'share', 'py-sip')
     else:
-        q = os.path.join(sys.prefix, 'share', 'sip')
+        q = os.path.join(sys.prefix, 'share', 'py-sip')
     q = os.environ.get('SIP_DIR', q)
     for x in ('', 'Py2-PyQt5', 'PyQt5', 'sip/PyQt5'):
         base = os.path.join(q, x)
