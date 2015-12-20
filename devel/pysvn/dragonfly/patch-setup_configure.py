--- setup_configure.py.orig	2015-08-18 20:28:19.000000000 +0300
+++ setup_configure.py
@@ -183,6 +183,9 @@ class Setup:
             elif sys.platform.startswith('freebsd'):
                 self.platform = 'freebsd'
 
+            elif sys.platform.startswith('dragonfly'):
+                self.platform = 'dragonfly'
+
             elif sys.platform == 'cygwin':
                 self.platform = 'cygwin'
 
@@ -201,6 +204,10 @@ class Setup:
             self.c_utils = LinuxCompilerGCC( self )
             self.c_pysvn = LinuxCompilerGCC( self )
 
+        elif self.platform == 'dragonfly':
+            self.c_utils = LinuxCompilerGCC( self )
+            self.c_pysvn = LinuxCompilerGCC( self )
+
         elif self.platform == 'freebsd':
             self.c_utils = FreeBsdCompilerGCC( self )
             self.c_pysvn = FreeBsdCompilerGCC( self )
