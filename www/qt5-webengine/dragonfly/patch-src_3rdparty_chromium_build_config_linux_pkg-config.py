--- src/3rdparty/chromium/build/config/linux/pkg-config.py.orig	2020-04-21 11:12:40 UTC
+++ src/3rdparty/chromium/build/config/linux/pkg-config.py
@@ -62,7 +62,7 @@ def SetConfigPath(options):
   if "linux" in sys.platform:
     libdir = sysroot + '/libdata/' + options.system_libdir + '/pkgconfig'
     libdir += ':' + sysroot + '/usr/share/pkgconfig'
-  elif "bsd" in sys.platform:
+  elif ("bsd" in sys.platform) or ("dragonfly" in sys.platform):
     libdir = sysroot + '/libdata/pkgconfig'
     libdir += ':' + '/usr/libdata/pkgconfig'
   os.environ['PKG_CONFIG_LIBDIR'] = libdir
@@ -113,7 +113,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if "bsd" not in sys.platform:
+  if ("bsd" not in sys.platform) and ("dragonfly" not in sys.platform):
     print("[[],[],[],[],[]]")
     return 0
 
