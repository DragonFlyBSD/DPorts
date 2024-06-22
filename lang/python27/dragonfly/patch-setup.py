--- setup.py.orig	2024-06-22 11:27:45 UTC
+++ setup.py
@@ -885,13 +885,14 @@ class PyBuildExt(build_ext):
         # find out which version of OpenSSL we have
         openssl_ver = 0
         openssl_ver_re = re.compile(
-            '^\s*#\s*define\s+OPENSSL_VERSION_NUMBER\s+(0x[0-9a-fA-F]+)' )
+            '^\s*#\s*define\s+OPENSSL_VERSION_TEXT\s+\"OpenSSL\s+([0-9]+.[0-0]+.[0-9]+).*')
 
         # look for the openssl version header on the compiler search path.
         opensslv_h = find_file('openssl/opensslv.h', [],
                 inc_dirs + search_for_ssl_incs_in)
         if opensslv_h:
             name = os.path.join(opensslv_h[0], 'openssl/opensslv.h')
+            print(" dir " + name)
             if host_platform == 'darwin' and is_macosx_sdk_path(name):
                 name = os.path.join(macosx_sdk_root(), name[1:])
             try:
@@ -899,7 +900,7 @@ class PyBuildExt(build_ext):
                 for line in incfile:
                     m = openssl_ver_re.match(line)
                     if m:
-                        openssl_ver = eval(m.group(1))
+                        openssl_ver = m.group(1)
             except IOError, msg:
                 print "IOError while reading opensshv.h:", msg
                 pass
@@ -918,6 +919,7 @@ class PyBuildExt(build_ext):
                                        library_dirs = ssl_libs,
                                        libraries = ['ssl', 'crypto']) )
             else:
+                print(inc_dirs)
                 print ("warning: openssl 0x%08x is too old for _hashlib" %
                        openssl_ver)
                 missing.append('_hashlib')
@@ -1615,6 +1617,10 @@ class PyBuildExt(build_ext):
             macros = dict()
             libraries = []
 
+        elif host_platform.startswith('dragonfly'):
+            macros = dict()
+            libraries = ['pthread']
+
         elif host_platform in ('freebsd4', 'freebsd5', 'freebsd6', 'freebsd7', 'freebsd8'):
             # FreeBSD's P1003.1b semaphore support is very experimental
             # and has many known problems. (as of June 2008)
@@ -1669,7 +1675,7 @@ class PyBuildExt(build_ext):
 # Initial backport of https://hg.python.org/cpython/rev/50f1922bc1d5
 
         if any(sys.platform.startswith(prefix)
-               for prefix in ("linux", "freebsd", "gnukfreebsd")):
+               for prefix in ("linux", "dragon", "freebsd", "gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
