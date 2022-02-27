--- src/Asteroid.hpp.orig	2014-02-02 18:23:11 UTC
+++ src/Asteroid.hpp
@@ -23,6 +23,7 @@
 #include "GraphicsFwd.hpp"
 #include "Surface.hpp"
 #include "ObjectGrid.hpp"
+#include <memory>
 
 class Asteroid : public StaticObject {
 public:
@@ -44,7 +45,7 @@ private:
    static string SurfaceFileName(int textureId);
 
    Texture* surfaceTexture;
-   shared_ptr<GLuint> displayList;
+   std::shared_ptr<GLuint> displayList;
    
    struct AsteroidSection {
       double texX, texwidth;
