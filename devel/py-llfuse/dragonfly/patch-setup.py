--- setup.py.orig	2019-02-14 12:51:17 UTC
+++ setup.py
@@ -145,8 +145,9 @@ def main():
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
