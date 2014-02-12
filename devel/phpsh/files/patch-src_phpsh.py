
$FreeBSD: head/devel/phpsh/files/patch-src_phpsh.py 340725 2014-01-22 17:40:44Z mat $

--- src/phpsh.py.orig
+++ src/phpsh.py
@@ -274,7 +274,7 @@
         self.config.add_section("Emacs")
 
     def read(self):
-        config_files = ["/etc/phpsh/config"]
+        config_files = ["%%PREFIX%%/etc/phpsh/config"]
         home = os.getenv("HOME")
         if home:
             homestr = home.strip()
