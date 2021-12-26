 /usr/include/c++/8.0/type_traits:56:3: error: template with C linkage
    template<typename _Tp, _Tp __v>
 socket.cc:24:1: note: 'extern "C"' linkage started here
  extern "C" {

--- pan/tasks/socket.cc.orig	2017-12-29 17:15:47 UTC
+++ pan/tasks/socket.cc
@@ -21,9 +21,7 @@
 #include <cstdarg>
 #include <ctime>
 #include <cmath>
-extern "C" {
-  #include <glib.h>
-}
+#include <glib.h>
 #include <pan/general/debug.h>
 #include <pan/general/string-view.h>
 #include "socket.h"
