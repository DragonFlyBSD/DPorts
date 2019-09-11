--- jwsmtp/jwsmtp/mailer.cpp.orig	2007-06-11 11:14:06 UTC
+++ jwsmtp/jwsmtp/mailer.cpp
@@ -31,6 +31,7 @@
 #include <fstream>
 #include <sstream>   // ostrstream
 #include <ctime>     // for localtime
+#include <cstring>   // for strcpy
 #include <cassert>
 #include "mailer.h"
 #include "base64.h"
