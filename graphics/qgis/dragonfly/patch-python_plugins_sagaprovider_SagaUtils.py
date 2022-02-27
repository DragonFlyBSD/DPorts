--- python/plugins/sagaprovider/SagaUtils.py.orig	2022-01-14 12:06:34 UTC
+++ python/plugins/sagaprovider/SagaUtils.py
@@ -56,7 +56,7 @@ def sagaBatchJobFilename():
 
 def findSagaFolder():
     folder = None
-    if isMac() or platform.system() == 'FreeBSD':
+    if isMac() or platform.system() == 'FreeBSD' or platform.system() == 'DragonFly':
         testfolder = os.path.join(QgsApplication.prefixPath(), 'bin')
         if os.path.exists(os.path.join(testfolder, 'saga_cmd')):
             folder = testfolder
@@ -85,7 +85,7 @@ def findSagaFolder():
 
 
 def sagaPath():
-    if not isWindows() and not isMac() and platform.system() != 'FreeBSD':
+    if not isWindows() and not isMac() and platform.system() != 'FreeBSD' and platform.system() != 'DragonFly':
         return ''
 
     folder = findSagaFolder()
@@ -102,7 +102,7 @@ def createSagaBatchJobFileFromSagaComman
             fout.write('set SAGA=' + sagaPath() + '\n')
             fout.write('set SAGA_MLB=' + os.path.join(sagaPath(), 'modules') + '\n')
             fout.write('PATH=%PATH%;%SAGA%;%SAGA_MLB%\n')
-        elif isMac() or platform.system() == 'FreeBSD':
+        elif isMac() or platform.system() == 'FreeBSD' or platform.system() == 'DragonFly':
             fout.write('export SAGA_MLB=' + os.path.join(sagaPath(), '../lib/saga') + '\n')
             fout.write('export PATH=' + sagaPath() + ':$PATH\n')
         for command in commands:
@@ -125,7 +125,7 @@ def getInstalledVersion(runSaga=False):
 
     if isWindows():
         commands = [os.path.join(sagaPath(), "saga_cmd.exe"), "-v"]
-    elif isMac() or platform.system() == 'FreeBSD':
+    elif isMac() or platform.system() == 'FreeBSD' or platform.system() == 'DragonFly':
         commands = [os.path.join(sagaPath(), "saga_cmd -v")]
     else:
         # for Linux use just one string instead of separated parameters as the list
@@ -141,7 +141,7 @@ def getInstalledVersion(runSaga=False):
             stderr=subprocess.STDOUT,
             universal_newlines=True,
         ) as proc:
-            if isMac() or platform.system() == 'FreeBSD':  # This trick avoids having an uninterrupted system call exception if SAGA is not installed
+            if isMac() or platform.system() == 'FreeBSD' or platform.system() == 'DragonFly':  # This trick avoids having an uninterrupted system call exception if SAGA is not installed
                 time.sleep(1)
             try:
                 lines = proc.stdout.readlines()
