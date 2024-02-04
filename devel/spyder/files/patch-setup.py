--- setup.py.orig	2023-08-29 21:53:14 UTC
+++ setup.py
@@ -91,7 +91,7 @@ def get_data_files():
     """
     Return data_files in a platform dependent manner.
     """
-    if sys.platform.startswith('linux'):
+    if sys.platform.startswith('linux') or sys.platform.startswith('freebsd'):
         data_files = [('share/applications', ['scripts/spyder.desktop']),
                       ('share/icons', ['img_src/spyder.png']),
                       ('share/metainfo',
@@ -197,7 +197,6 @@ setup_args = dict(
         'Topic :: Scientific/Engineering',
         'Topic :: Software Development :: Widget Sets',
     ],
-    cmdclass=CMDCLASS,
 )
 
 
@@ -229,7 +228,7 @@ install_requires = [
     'pyls-spyder>=0.4.0',
     'pyqt5<5.16',
     'pyqtwebengine<5.16',
-    'python-lsp-server[all]>=1.7.4,<1.8.0',
+    'python-lsp-server[all]>=1.7.4',
     'pyxdg>=0.26;platform_system=="Linux"',
     'pyzmq>=22.1.0',
     'qdarkstyle>=3.0.2,<3.2.0',
