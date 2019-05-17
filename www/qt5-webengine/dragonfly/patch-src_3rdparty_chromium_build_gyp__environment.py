--- src/3rdparty/chromium/build/gyp_environment.py.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/chromium/build/gyp_environment.py
@@ -23,7 +23,7 @@ def SetEnvironment():
   # . -f / --format has precedence over the env var, no need to check for it
   # . set the env var only if it hasn't been set yet
   # . chromium.gyp_env has been applied to os.environ at this point already
-  if sys.platform.startswith(('linux', 'win', 'freebsd', 'darwin')) and \
+  if sys.platform.startswith(('linux', 'win', 'freebsd', 'dragonfly', 'darwin')) and \
       not os.environ.get('GYP_GENERATORS'):
     os.environ['GYP_GENERATORS'] = 'ninja'
 
