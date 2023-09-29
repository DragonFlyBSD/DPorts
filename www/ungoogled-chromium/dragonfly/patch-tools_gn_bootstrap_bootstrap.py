diff --git tools/gn/bootstrap/bootstrap.py tools/gn/bootstrap/bootstrap.py
index caf736b2894..e0134049092 100755
--- tools/gn/bootstrap/bootstrap.py
+++ tools/gn/bootstrap/bootstrap.py
@@ -29,7 +29,6 @@ BOOTSTRAP_DIR = os.path.dirname(os.path.abspath(__file__))
 GN_ROOT = os.path.dirname(BOOTSTRAP_DIR)
 SRC_ROOT = os.path.dirname(os.path.dirname(GN_ROOT))
 
-
 def main(argv):
   parser = optparse.OptionParser(description=sys.modules[__name__].__doc__)
   parser.add_option(
