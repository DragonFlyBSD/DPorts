--- as_setup.py.orig	2020-01-27 10:08:25.000000000 +0000
+++ as_setup.py
@@ -521,6 +521,44 @@ class SETUP:
       if iextr_as:
          self.Clean(to_delete=path)
 
+      # Insert DragonFly patches here
+      file2patch = os.path.join(self.workdir, self.content, 'bibc/include/aster_depend.h')
+      self._print('DragonFly patch: depend include => modify ' + file2patch)
+      for ligne in fileinput.input(file2patch, inplace=1):
+         nl = 0
+         nl = ligne.find("__FreeBSD__")
+         if nl > 0:
+            ligne =ligne.replace("__FreeBSD__", "__DragonFly__")
+         sys.stdout.write(ligne)
+      file2patch = os.path.join(self.workdir, self.content, 'bibc/utilitai/mempid.c')
+      self._print('DragonFly patch: no mem counting => modify ' + file2patch)
+      for ligne in fileinput.input(file2patch, inplace=1):
+         nl = 0
+         nl = ligne.find("__FreeBSD__")
+         if nl > 0:
+            ligne =ligne.replace("__FreeBSD__", "__DragonFly__")
+         nl = 0
+         nl = ligne.find("FREEBSD")
+         if nl > 0:
+            ligne =ligne.replace("FREEBSD", "__DragonFly__")
+         nl = 0
+         nl = ligne.find("ki_dsize")
+         if nl > 0:
+            ligne =ligne.replace("ki_dsize", "kp_vm_dsize")
+         nl = 0
+         nl = ligne.find("ki_size")
+         if nl > 0:
+            ligne =ligne.replace("ki_size", "kp_vm_map_size")
+         nl = 0
+         nl = ligne.find("ki_rssize")
+         if nl > 0:
+            ligne =ligne.replace("ki_rssize", "kp_vm_rssize")
+         nl = 0
+         nl = ligne.find("ki_ssize")
+         if nl > 0:
+            ligne =ligne.replace("ki_ssize", "kp_vm_ssize")
+         sys.stdout.write(ligne)
+
       # Insert FreeBSD patches here
       file2patch = os.path.join(self.workdir, self.content, 'bibc/wscript')
       self._print('FreeBSD patch: no libdl => modify ' + file2patch)
