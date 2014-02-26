
$FreeBSD: head/devel/phpsh/files/patch-src_phpsh.py 345622 2014-02-22 10:48:08Z mva $

--- src/phpsh.py.orig
+++ src/phpsh.py
@@ -274,7 +274,7 @@
         self.config.add_section("Emacs")
 
     def read(self):
-        config_files = ["/etc/phpsh/config"]
+        config_files = ["%%ETCDIR%%/config"]
         home = os.getenv("HOME")
         if home:
             homestr = home.strip()
