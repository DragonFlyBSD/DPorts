--- src/3rdparty/chromium/build/config/linux/pkg-config.py.intermediate	2019-05-06 09:08:08.000000000 +0000
+++ src/3rdparty/chromium/build/config/linux/pkg-config.py
@@ -60,7 +60,7 @@ def SetConfigPath(options):
   if "linux" in sys.platform:
     libdir = sysroot + '/libdata/' + options.system_libdir + '/pkgconfig'
     libdir += ':' + sysroot + '/usr/share/pkgconfig'
-  elif "bsd" in sys.platform:
+  elif ("bsd" in sys.platform) or ("dragonfly" in sys.platform):
     libdir = sysroot + '/libdata/pkgconfig'
     libdir += ':' + '/usr/libdata/pkgconfig'
   os.environ['PKG_CONFIG_LIBDIR'] = libdir
@@ -111,7 +111,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if "bsd" not in sys.platform:
+  if ("bsd" not in sys.platform) and ("dragonfly" not in sys.platform):
     print "[[],[],[],[],[]]"
     return 0
 
