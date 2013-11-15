--- setup/__init__.py.orig	2013-09-06 04:28:39.000000000 +0000
+++ setup/__init__.py
@@ -13,7 +13,8 @@ iswindows = re.search('win(32|64)', sys.
 isosx = 'darwin' in sys.platform
 isfreebsd = 'freebsd' in sys.platform
 isnetbsd = 'netbsd' in sys.platform
-isbsd = isnetbsd or isfreebsd
+isdragonfly = 'dragonfly' in sys.platform
+isbsd = isnetbsd or isfreebsd or isdragonfly
 islinux = not isosx and not iswindows and not isbsd
 SRC = os.path.abspath('src')
 sys.path.insert(0, SRC)
