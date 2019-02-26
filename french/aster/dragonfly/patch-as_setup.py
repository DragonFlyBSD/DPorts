--- as_setup.py.orig	2019-02-21 17:47:39.000000000 +0000
+++ as_setup.py	2019-02-21 17:47:39.000000000 +0000
@@ -521,6 +521,48 @@
       if iextr_as:
          self.Clean(to_delete=path)
 
+      # Insert DragonFly patches here
+      file2patch = os.path.join(self.workdir, self.content, 'bibc/include/aster_depend.h')
+      self._print('DragonFly patch: depend include => modify ' + file2patch)
+      for ligne in fileinput.input(file2patch, inplace=1):
+         nl = 0
+         nl = string.find(ligne, "__FreeBSD__")
+         if nl > 0:
+            ligne =ligne.replace("__FreeBSD__", "__DragonFly__")
+         sys.stdout.write(ligne)
+      file2patch = os.path.join(self.workdir, self.content, 'bibc/utilitai/mempid.c')
+      self._print('DragonFly patch: no mem counting => modify ' + file2patch)
+      for ligne in fileinput.input(file2patch, inplace=1):
+         nl = 0
+         nl = string.find(ligne, "__FreeBSD__")
+         if nl > 0:
+            ligne =ligne.replace("__FreeBSD__", "__DragonFly__")
+         nl = 0
+         nl = string.find(ligne, "ki_dsize")
+         if nl > 0:
+            ligne =ligne.replace("ki_dsize", "kp_vm_dsize")
+         nl = 0
+         nl = string.find(ligne, "ki_size")
+         if nl > 0:
+            ligne =ligne.replace("ki_size", "kp_vm_map_size")
+         nl = 0
+         nl = string.find(ligne, "ki_rssize")
+         if nl > 0:
+            ligne =ligne.replace("ki_rssize", "kp_vm_rssize")
+         nl = 0
+         nl = string.find(ligne, "ki_ssize")
+         if nl > 0:
+            ligne =ligne.replace("ki_ssize", "kp_vm_ssize")
+         sys.stdout.write(ligne)
+      file2patch = os.path.join(self.workdir, self.content, 'bibc/renum/onmetl.c')
+      self._print('DragonFly patch: try to remove a left behind function => modify ' + file2patch)
+      for ligne in fileinput.input(file2patch, inplace=1):
+         nl = 0
+         nl = string.find(ligne, "WritePermutation")
+         if nl > 0:
+            ligne =ligne.replace("WritePermutation", "WritePermutation1")
+         sys.stdout.write(ligne)
+
       # Insert FreeBSD patches here
       file2patch = os.path.join(self.workdir, self.content, 'bibc/wscript')
       self._print('FreeBSD patch: no libdl => modify ' + file2patch)
@@ -530,14 +572,6 @@
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
