--- setup.py.orig	2017-01-22 22:24:10 UTC
+++ setup.py
@@ -117,7 +117,7 @@ def main():
     elif os.uname()[0] == 'Darwin':
         compile_args.append('-DHAVE_STRUCT_STAT_ST_ATIMESPEC')
         c_sources.append('src/darwin_compat.c')
-    elif os.uname()[0] in ('FreeBSD', 'NetBSD'):
+    elif os.uname()[0] in ('FreeBSD', 'NetBSD', 'DragonFly'):
         compile_args.append('-DHAVE_STRUCT_STAT_ST_ATIMESPEC')
     else:
         print("NOTE: unknown system (%s), nanosecond resolution file times "
@@ -147,8 +147,9 @@ def main():
                        'License :: OSI Approved :: GNU Library or Lesser General Public License (LGPL)',
                        'Operating System :: POSIX :: Linux',
                        'Operating System :: MacOS :: MacOS X',
+                       'Operating System :: POSIX :: BSD :: DragonFly',
                        'Operating System :: POSIX :: BSD :: FreeBSD'],
-          platforms=[ 'Linux', 'FreeBSD', 'OS X' ],
+          platforms=[ 'Linux', 'DragonFly', 'FreeBSD', 'OS X' ],
           keywords=['FUSE', 'python' ],
           package_dir={'': 'src'},
           packages=setuptools.find_packages('src'),
