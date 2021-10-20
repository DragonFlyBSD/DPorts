Hmmm "virtual int_type overflow(int) {return EOF;}" OK...

--- src/datastream.h.orig	2009-01-06 13:20:05.000000000 +0200
+++ src/datastream.h
@@ -32,6 +32,8 @@
 # include <streambuf.h>
 #endif
 
+#include <cstdio> // for EOF
+
 #if defined(ODBCXX_QT)
 # include <qiodevice.h>
 #endif
