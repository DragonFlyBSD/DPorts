--- setup.py.intermediate	2019-05-11 12:24:28.000000000 +0000
+++ setup.py
@@ -117,7 +117,7 @@ ext_modules = []
 
 if operatingSystem == 'mac':
     extra_link_args = ['-Wl,-framework', '-Wl,Accelerate', '-headerpad_max_install_names']
-elif operatingSystem == 'linux' or operatingSystem.startswith('freebsd'):
+elif operatingSystem == 'linux' or operatingSystem.startswith('freebsd') or operatingSystem.startswith('dragonfly'):
     extra_link_args = ['-lrt']
 else:
     # Assuming Windows
