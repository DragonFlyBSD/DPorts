--- src/factory.py.orig	2009-05-28 19:08:52 UTC
+++ src/factory.py
@@ -313,7 +313,7 @@ class _Factory:
                 return self.create_from_url(name)
             if not os.path.exists(name):
                 return None
-            if (os.uname()[0] == 'FreeBSD' and \
+            if ((os.uname()[0] == 'FreeBSD' or os.uname()[0] == 'DragonFly') and \
                 stat.S_ISCHR(os.stat(name)[stat.ST_MODE])) \
                 or stat.S_ISBLK(os.stat(name)[stat.ST_MODE]):
                 return self.create_from_device(name)
