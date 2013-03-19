--- configure.py.intermediate	2013-03-19 12:17:39.141230000 +0000
+++ configure.py
@@ -258,27 +258,27 @@ class ConfigurePyQt3(ConfigureBase):
         }
 
     def code(self, extra_include_dirs, extra_lib_dir, extra_libs):
-        generate_code("qt", extra_include_dirs=extra_include_dirs, extra_lib_dir=extra_lib_dir, extra_libs=extra_libs)
+        generate_code("qt", extra_include_dirs=extra_include_dirs, extra_lib_dir=extra_lib_dir, extra_libs=extra_libs, extra_cxxflags="-DANY=void")
 
         if "qtext" in pyqt_modules:
-            generate_code("qtext", extra_define=qsci_define, extra_include_dirs=[opt_qsciincdir], extra_lib_dir=opt_qscilibdir, extra_libs=["qscintilla"], sip_flags=qtext_sip_flags)
+            generate_code("qtext", extra_define=qsci_define, extra_include_dirs=[opt_qsciincdir], extra_lib_dir=opt_qscilibdir, extra_libs=["qscintilla"], sip_flags=qtext_sip_flags, extra_cxxflags="-DANY=void")
 
         if "qtgl" in pyqt_modules:
-            generate_code("qtgl", opengl=1)
+            generate_code("qtgl", opengl=1, extra_cxxflags="-DANY=void")
 
         if "qtpe" in pyqt_modules:
-            generate_code("qtpe", extra_libs=["qpe"], sip_flags=qtpe_sip_flags)
+            generate_code("qtpe", extra_libs=["qpe"], sip_flags=qtpe_sip_flags, extra_cxxflags="-DANY=void")
 
         if "qtui" in pyqt_modules:
-            generate_code("qtui", extra_libs=["qui"])
+            generate_code("qtui", extra_libs=["qui"], extra_cxxflags="-DANY=void")
 
         if "qtaxcontainer" in pyqt_modules:
-            generate_code("qtaxcontainer", extra_libs=["qaxcontainer"])
+            generate_code("qtaxcontainer", extra_libs=["qaxcontainer"], extra_cxxflags="-DANY=void")
 
         # The rest don't need special handling.
         for m in ("qtcanvas", "qtnetwork", "qtsql", "qttable", "qtxml"):
             if m in pyqt_modules:
-                generate_code(m)
+                generate_code(m, extra_cxxflags="-DANY=void")
 
     def tools(self):
         tool_dirs = []
