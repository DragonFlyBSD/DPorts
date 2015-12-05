--- configure-gl.m4.bak	2015-12-05 16:21:23.000000000 +0200
+++ configure-gl.m4
@@ -30,6 +30,9 @@ else
         GL_LIBS="-lGL -lGLU -lpthread" 
     fi
 fi 
+if test `uname -s` = DragonFly; then 
+    GL_LIBS="-lGL -lGLU -lGLEW"
+fi
 
 AC_SUBST(GL_LIBS)
 
