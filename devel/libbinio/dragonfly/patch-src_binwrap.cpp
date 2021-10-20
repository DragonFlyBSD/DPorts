--- src/binwrap.cpp.orig	2003-03-08 18:02:34.000000000 +0200
+++ src/binwrap.cpp
@@ -17,6 +17,8 @@
  * Copyright (C) 2002, 2003 Simon Peter <dn.tlp@gmx.net>
  */
 
+#include <stdio.h> // for EOF
+
 #include "binwrap.h"
 
 #if BINIO_ENABLE_IOSTREAM
