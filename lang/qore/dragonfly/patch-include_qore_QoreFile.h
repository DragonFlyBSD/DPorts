--- include/qore/QoreFile.h.orig	2013-02-22 16:11:01.000000000 +0000
+++ include/qore/QoreFile.h
@@ -33,6 +33,7 @@
 #include <unistd.h>
 
 #include <string>
+#undef getchar
 
 class QoreTermIOS;
 class Queue;
