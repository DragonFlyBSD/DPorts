--- engine/SCons/Defaults.py.orig	2013-03-03 14:48:39 UTC
+++ engine/SCons/Defaults.py
@@ -470,7 +470,7 @@ ConstructionEnvironment = {
     'CONFIGURELOG'  : '#/config.log',
     'CPPSUFFIXES'   : SCons.Tool.CSuffixes,
     'DSUFFIXES'     : SCons.Tool.DSuffixes,
-    'ENV'           : {},
+    'ENV'           : { 'CCVER' : os.environ['CCVER'] },
     'IDLSUFFIXES'   : SCons.Tool.IDLSuffixes,
 #    'LATEXSUFFIXES' : SCons.Tool.LaTeXSuffixes, # moved to the TeX tools generate functions
     '_concat'       : _concat,
