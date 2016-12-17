--- tools/pythonconf.py.intermediate	2016-12-17 13:34:45.000000000 +0200
+++ tools/pythonconf.py
@@ -48,7 +48,7 @@ while i < len(sys.argv):
             # GNU
             # ldlibflags: last char must stay a space
             ldlibflags = "-L" + sys.prefix + "/lib" + " -lpython" + str(pythonVersion) + " "
-            if find( sys.platform, "bsd" ) != -1:
+            if find( sys.platform, "bsd" ) != -1 or find( sys.platform, "dragonfly" ) != -1:
                 ldlibflags += "-pthread "
             else:
                 ldlibflags += "-lpthread "
