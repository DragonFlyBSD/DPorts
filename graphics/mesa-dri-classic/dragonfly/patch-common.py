--- common.py.orig	2020-09-28 22:52:10 UTC
+++ common.py
@@ -104,7 +104,7 @@ def AddOptions(opts):
                         default_machine,
                         allowed_values=('generic', 'ppc', 'x86', 'x86_64')))
     opts.Add(EnumOption('platform', 'target platform', host_platform,
-                        allowed_values=('cygwin', 'darwin', 'freebsd', 'haiku',
+                        allowed_values=('cygwin', 'darwin', 'dragonfly', 'freebsd', 'haiku',
                                         'linux', 'sunos', 'windows')))
     opts.Add(BoolOption('embedded', 'embedded build', 'no'))
     opts.Add(BoolOption('analyze',
