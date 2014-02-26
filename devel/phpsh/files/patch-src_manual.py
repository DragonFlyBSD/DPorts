
$FreeBSD: head/devel/phpsh/files/patch-src_manual.py 345622 2014-02-22 10:48:08Z mva $

--- src/manual.py.orig
+++ src/manual.py
@@ -69,7 +69,7 @@
     manual_file = "php_manual.db"
     manual_path = os.path.join(os.getenv("HOME"), ".phpsh", manual_file)
     if not os.path.exists(manual_path):
-        manual_path = os.path.join("/etc/phpsh", manual_file)
+        manual_path = os.path.join("%%ETCDIR%%", manual_file)
     conn = sqlite.connect(manual_path)
     cursor = conn.cursor()
 
