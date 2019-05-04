--- cmake/Modules/GrPython.cmake.intermediate	2019-05-02 19:26:02 UTC
+++ cmake/Modules/GrPython.cmake
@@ -102,7 +102,7 @@ execute_process(COMMAND ${PYTHON_EXECUTA
 import os
 import sys
 from sysconfig import get_platform
-if get_platform().startswith('freebsd'):
+if get_platform().startswith('freebsd') or get_platform().startswith('dragonfly'):
         print(os.path.join('lib', 'python' + sys.version[:3], 'site-packages'))
 else:
     if os.name == 'posix':
