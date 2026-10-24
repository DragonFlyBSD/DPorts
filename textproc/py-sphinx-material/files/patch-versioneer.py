--- versioneer.py.orig	2020-04-07 07:24:05 UTC
+++ versioneer.py
@@ -343,9 +343,8 @@ def get_config_from_root(root):
     # configparser.NoOptionError (if it lacks "VCS="). See the docstring at
     # the top of versioneer.py for instructions on writing your setup.cfg .
     setup_cfg = os.path.join(root, "setup.cfg")
-    parser = configparser.SafeConfigParser()
-    with open(setup_cfg, "r") as f:
-        parser.readfp(f)
+    parser = configparser.ConfigParser()
+    parser.read(setup_cfg)
     VCS = parser.get("versioneer", "VCS")  # mandatory
 
     def get(parser, name):
