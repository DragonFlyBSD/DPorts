--- common-project-config.pri.orig	2016-06-02 09:44:21 UTC
+++ common-project-config.pri
@@ -48,11 +48,7 @@ exists( meego-release ) {
     ARCH = $$system(uname -m)
 }
 
-contains( ARCH, x86_64 ) {
-    INSTALL_LIBDIR = $${INSTALL_PREFIX}/lib64
-} else {
     INSTALL_LIBDIR = $${INSTALL_PREFIX}/lib
-}
 
 # default library directory can be overriden by defining LIBDIR when
 # running qmake
