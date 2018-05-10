--- objconv/basemaker/base_maker.cpp.intermediate	2018-03-02 18:59:12.000000000 +0000
+++ objconv/basemaker/base_maker.cpp
@@ -2060,7 +2060,7 @@ void Base::DrawWin()
 int main( int argc, char **argv )
 {
     printf( "Loading...\n" );
-    Base::CurrentBase   = false;
+    Base::CurrentBase   = NULL;
     glutInit( &argc, argv );
     glutInitWindowSize( 800, 600 );
     g_game.x_resolution = 800;
