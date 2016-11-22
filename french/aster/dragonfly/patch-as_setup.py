--- as_setup.py.intermediate	2016-11-22 14:53:10.000000000 +0200
+++ as_setup.py
@@ -521,6 +521,32 @@ class SETUP:
       if iextr_as:
          self.Clean(to_delete=path)
 
+      # Insert DragonFly patches here
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
+
       # Insert FreeBSD patches here
       file2patch = os.path.join(self.workdir, self.content, 'bibc/wscript')
       self._print('FreeBSD patch: no libdl => modify ' + file2patch)
