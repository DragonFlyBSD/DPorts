--- storage/tokudb/ft-index/portability/memory.cc.orig	2013-09-19 22:34:24.000000000 +0000
+++ storage/tokudb/ft-index/portability/memory.cc
@@ -93,11 +93,6 @@ PATENT RIGHTS GRANT:
 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>
-#if defined(HAVE_MALLOC_H)
-# include <malloc.h>
-#elif defined(HAVE_SYS_MALLOC_H)
-# include <sys/malloc.h>
-#endif
 #include <dlfcn.h>
 #include <toku_race_tools.h>
 #include "memory.h"
