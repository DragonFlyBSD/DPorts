--- mupdf-1.27.2-source/scripts/wrap/state.py.orig	2026-03-31 15:58:09 UTC
+++ mupdf-1.27.2-source/scripts/wrap/state.py
@@ -73,7 +73,7 @@
         self.windows = (self.os_name == 'Windows' or self.os_name.startswith('CYGWIN'))
         self.cygwin = self.os_name.startswith('CYGWIN')
         self.openbsd = self.os_name == 'OpenBSD'
-        self.freebsd = self.os_name == 'FreeBSD'
+        self.freebsd = self.os_name in ('FreeBSD', 'DragonFly')
         self.linux = self.os_name == 'Linux'
         self.macos = self.os_name == 'Darwin'
         self.pyodide = os.environ.get('OS') == 'pyodide'
