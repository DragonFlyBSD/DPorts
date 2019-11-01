--- serial/tools/list_ports_posix.py.orig	2017-03-16 22:59:33 UTC
+++ serial/tools/list_ports_posix.py
@@ -47,7 +47,7 @@ elif plat[:7] == 'openbsd':    # OpenBSD
             devices.extend(list_ports_common.list_links(devices))
         return [list_ports_common.ListPortInfo(d) for d in devices]
 
-elif plat[:3] == 'bsd' or plat[:7] == 'freebsd':
+elif plat[:3] == 'bsd' or plat[:7] == 'freebsd' or plat[:9] == 'dragonfly':
     def comports(include_links=False):
         devices = glob.glob('/dev/cua*[!.init][!.lock]')
         if include_links:
