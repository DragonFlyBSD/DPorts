--- setup.py.intermediate	2020-08-25 16:29:11.000000000 +0000
+++ setup.py
@@ -156,7 +156,7 @@ USR = "usr"
 ETC = "/usr/obj/dports/net/cloud-init/stage/usr/local/etc"
 USR_LIB_EXEC = "usr/lib"
 LIB = "lib"
-if os.uname()[0] == 'FreeBSD':
+if os.uname()[0] == 'FreeBSD' or os.uname()[0] == 'DragonFly':
     USR = "usr/local"
     USR_LIB_EXEC = "usr/local/lib"
 elif os.path.isfile('/etc/redhat-release'):
@@ -259,7 +259,7 @@ data_files = [
     (USR + '/share/doc/cloud-init/examples/seed',
         [f for f in glob('doc/examples/seed/*') if is_f(f)]),
 ]
-if not platform.system().endswith('BSD'):
+if not platform.system().endswith('BSD') and not platform.system().endswith('DragonFly'):
     data_files.extend([
         (ETC + '/NetworkManager/dispatcher.d/',
          ['tools/hook-network-manager']),
