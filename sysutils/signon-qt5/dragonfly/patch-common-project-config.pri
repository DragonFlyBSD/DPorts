--- common-project-config.pri.orig	2015-09-28 14:43:07 UTC
+++ common-project-config.pri
@@ -67,11 +67,7 @@ exists( meego-release ) {
     ARCH = $$system(uname -m)
 }
 
-contains( ARCH, x86_64 ) {
-    INSTALL_LIBDIR = $${INSTALL_PREFIX}/lib64
-} else {
     INSTALL_LIBDIR = $${INSTALL_PREFIX}/lib
-}
 
 # default library directory can be overriden by defining LIBDIR when
 # running qmake
