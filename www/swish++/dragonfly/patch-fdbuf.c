srsly? the .c ?

--- fdbuf.c.orig	2005-01-02 22:10:26.000000000 +0200
+++ fdbuf.c
@@ -22,6 +22,7 @@
 // standard
 #include <cerrno>
 #include <cstring>
+#include <cstdio> // for EOF
 #include <unistd.h>
 
 // local
