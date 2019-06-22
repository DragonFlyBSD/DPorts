--- mquery.c.intermediate	2019-06-07 19:23:14.000000000 +0000
+++ mquery.c
@@ -19,6 +19,7 @@
 # define CLOSESOCKET(S) closesocket((SOCKET)S)
 # define ssize_t int
 #else
+# include <sys/select.h>
 # include <unistd.h> // read, write, close
 # define CLOSESOCKET(S) close(S)
 #endif
