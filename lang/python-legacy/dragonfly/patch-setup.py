--- setup.py.orig	2014-07-20 12:11:37.904857000 +0000
+++ setup.py
@@ -886,6 +886,10 @@
         openssl_ver = 0
         openssl_ver_re = re.compile(
             '^\s*#\s*define\s+OPENSSL_VERSION_NUMBER\s+(0x[0-9a-fA-F]+)' )
+        # OpenSSL 3 spells OPENSSL_VERSION_NUMBER as an expression of these.
+        openssl_part_re = re.compile(
+            '^\s*#\s*define\s+OPENSSL_VERSION_(MAJOR|MINOR|PATCH)\s+([0-9]+)')
+        openssl_parts = {}
 
         # look for the openssl version header on the compiler search path.
         opensslv_h = find_file('openssl/opensslv.h', [],
@@ -900,9 +904,16 @@
                     m = openssl_ver_re.match(line)
                     if m:
                         openssl_ver = eval(m.group(1))
+                    m = openssl_part_re.match(line)
+                    if m:
+                        openssl_parts[m.group(1)] = int(m.group(2))
             except IOError, msg:
                 print "IOError while reading opensshv.h:", msg
                 pass
+            if not openssl_ver and len(openssl_parts) == 3:
+                openssl_ver = (openssl_parts['MAJOR'] << 28 |
+                               openssl_parts['MINOR'] << 20 |
+                               openssl_parts['PATCH'] << 4)
 
         min_openssl_ver = 0x00907000
         have_any_openssl = ssl_incs is not None and ssl_libs is not None
@@ -1614,6 +1625,10 @@
         elif host_platform == 'cygwin':          # Cygwin
             macros = dict()
             libraries = []
+
+        elif host_platform.startswith('dragonfly'):
+            macros = dict()
+            libraries = ['pthread']
 
         elif host_platform in ('freebsd4', 'freebsd5', 'freebsd6', 'freebsd7', 'freebsd8'):
             # FreeBSD's P1003.1b semaphore support is very experimental
@@ -1669,7 +1684,7 @@
 # Initial backport of https://hg.python.org/cpython/rev/50f1922bc1d5
 
         if any(sys.platform.startswith(prefix)
-               for prefix in ("linux", "freebsd", "gnukfreebsd")):
+               for prefix in ("linux", "dragon", "freebsd", "gnukfreebsd")):
             exts.append( Extension('ossaudiodev', ['ossaudiodev.c']) )
         else:
             missing.append('ossaudiodev')
