--- setup.py.orig	2022-11-16 16:07:03.897578000 +0100
+++ setup.py	2022-11-16 16:10:22.393206000 +0100
@@ -244,7 +244,7 @@
 
         if len(self.init_system) == 0 and not platform.system().endswith(
             "BSD"
-        ):
+        ) and not platform.system().endswith('DragonFly'):
             self.init_system = ["systemd"]
 
         bad = [f for f in self.init_system if f not in INITSYS_TYPES]
@@ -302,7 +302,7 @@
         [f for f in glob("doc/examples/seed/*") if is_f(f)],
     ),
 ]
-if not platform.system().endswith("BSD"):
+if not platform.system().endswith("BSD") and not platform.system().endswith('DragonFly'): 
 
     RULES_PATH = LIB
     if os.path.isfile("/etc/redhat-release"):
