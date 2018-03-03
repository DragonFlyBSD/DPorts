--- setup/build_environment.py.orig	2018-02-12 17:46:47 UTC
+++ setup/build_environment.py
@@ -86,10 +86,8 @@ pyqt['sip_flags'] = PYQT_CONFIGURATION['
 def get_sip_dir():
     if iswindows:
         q = os.environ.get('SIP_DIR', os.path.join(sys.prefix, 'share', 'sip'))
-    elif isfreebsd:
-        q = os.environ.get('SIP_DIR', os.path.join(sys.prefix, 'share', 'py-sip'))
     else:
-        q = os.path.join(sys.prefix, 'share', 'sip')
+        q = os.environ.get('SIP_DIR', os.path.join(sys.prefix, 'share', 'py-sip'))
     for x in ('', 'Py2-PyQt5', 'PyQt5', 'sip/PyQt5'):
         base = os.path.join(q, x)
         if os.path.exists(os.path.join(base, 'QtWidgets')):
