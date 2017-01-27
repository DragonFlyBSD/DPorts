Are they serious? Link in both libc++ *and* libstdc++???

--- as_setup.pyo.orig	2017-01-26 10:15:07.000000000 +0200
+++ as_setup.py
@@ -556,14 +556,6 @@ class SETUP:
          if nl > 0:
             ligne =ligne.replace("self.check_cc", "# self.check_cc")
          sys.stdout.write(ligne)
-      file2patch = os.path.join(self.workdir, self.content, 'bibcxx/wscript')
-      self._print('FreeBSD patch: explicit link with libc++ required since Gcc 4.9 => modify ' + file2patch)
-      for ligne in fileinput.input(file2patch, inplace=1):
-         nl = 0
-         nl = string.find(ligne, "uselib_store='CXX', lib='stdc++'")
-         if nl > 0:
-            ligne =ligne.replace("lib='stdc++'", "lib='c++ stdc++'")
-         sys.stdout.write(ligne)
       file2patch = os.path.join(self.workdir, self.content, 'waftools/scotch.py')
       self._print('FreeBSD patch: int64_t missing => modify ' + file2patch)
       for ligne in fileinput.input(file2patch, inplace=1):
