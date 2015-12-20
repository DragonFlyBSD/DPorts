--- setup.py.intermediate	2015-12-18 14:46:46.000000000 +0200
+++ setup.py
@@ -24,7 +24,7 @@ elif sys.platform == 'linux2':
     extra_link_args = []
     bison2pyscript = 'utils/bison2py'
     bisondynlibModule = "src/c/bisondynlib-linux.c"
-elif 'freebsd' in sys.platform:
+elif 'freebsd' in sys.platform or 'dragonfly' in sys.platform:
     libs = []
     extra_link_args = []
     bison2pyscript = 'utils/bison2py'
