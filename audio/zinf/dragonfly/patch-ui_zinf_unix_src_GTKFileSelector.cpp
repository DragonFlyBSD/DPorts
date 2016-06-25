--- ui/zinf/unix/src/GTKFileSelector.cpp.intermediate	2016-06-24 19:49:33.000000000 +0300
+++ ui/zinf/unix/src/GTKFileSelector.cpp
@@ -24,6 +24,7 @@ ________________________________________
 
 #include <unistd.h>
 #include <dirent.h>
+#include <cstring>
 
 #if defined(solaris) || defined(__FreeBSD__)                                                         
 #include <stdlib.h>
