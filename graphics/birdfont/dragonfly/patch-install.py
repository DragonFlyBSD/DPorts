--- install.py.orig	2020-11-26 17:27:00.000000000 +0000
+++ install.py
@@ -152,7 +152,7 @@ elif not options.libdir:
 		if p == 'i386' or p == 's390' or p == 'ppc' or p == 'armv7hl':
 			libdir = '/lib'
 		elif p == 'x86_64' or p == 's390x' or p == 'ppc64':
-			libdir = '/lib64'
+			libdir = '/lib'
 		else:
 			libdir = '/lib'
 else:
