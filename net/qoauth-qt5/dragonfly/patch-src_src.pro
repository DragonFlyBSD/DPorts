--- src/src.pro.intermediate	2018-05-14 05:04:26 UTC
+++ src/src.pro
@@ -80,11 +80,7 @@ else:unix {
     system( ./pcfile.sh $${INSTALL_PREFIX} $${VERSION} )
     pkgconfig.files = qoauth-qt5.pc
     
-    contains(QMAKE_HOST.arch, x86_64) {
-      target.path = $${INSTALL_PREFIX}/lib64
-    } else {
       target.path = $${INSTALL_PREFIX}/lib
-    }
 
     headers.path = $${INSTALL_PREFIX}/include/QtOAuth-qt5/QtOAuth
     docs.path = $${INSTALL_PREFIX}/share/doc/$${TARGET}-$${VERSION}/html
