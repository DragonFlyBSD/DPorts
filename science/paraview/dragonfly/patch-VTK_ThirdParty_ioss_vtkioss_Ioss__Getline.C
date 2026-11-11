--- VTK/ThirdParty/ioss/vtkioss/Ioss_Getline.C.orig
+++ VTK/ThirdParty/ioss/vtkioss/Ioss_Getline.C
@@ -130,7 +130,7 @@
 #ifdef __EMSCRIPTEN__
 #include <termios.h>
 #elif __unix__
-#include <sys/termios.h>
+#include <termios.h>
 #endif
   struct termios io_new_termios;
   struct termios io_old_termios;
