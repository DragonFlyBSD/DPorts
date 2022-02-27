--- setup.py.intermediate	2022-01-31 21:31:05.000000000 +0000
+++ setup.py
@@ -221,7 +221,7 @@ class InitsysInstallData(install):
             self.init_system = self.init_system.split(",")
 
         if (len(self.init_system) == 0 and
-                not platform.system().endswith('BSD')):
+                not platform.system().endswith('BSD') and not platform.system().endswith('DragonFly')):
             self.init_system = ['systemd']
 
         bad = [f for f in self.init_system if f not in INITSYS_TYPES]
@@ -266,7 +266,7 @@ data_files = [
     (USR + '/share/doc/cloud-init/examples/seed',
         [f for f in glob('doc/examples/seed/*') if is_f(f)]),
 ]
-if not platform.system().endswith('BSD'):
+if not platform.system().endswith('BSD') and not platform.system().endswith('DragonFly'):
     data_files.extend([
         (ETC + '/NetworkManager/dispatcher.d/',
          ['tools/hook-network-manager']),
