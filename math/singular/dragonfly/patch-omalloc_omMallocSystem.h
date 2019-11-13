Otherwise implicit function declaration and size_t type gets yeeted

--- omalloc/omMallocSystem.h.orig	2018-02-14 14:55:29 UTC
+++ omalloc/omMallocSystem.h
@@ -7,6 +7,8 @@
 #ifndef OM_MALLOC_SYSTEM_H
 #define OM_MALLOC_SYSTEM_H
 
+#include <unistd.h>	/* for valloc() */
+
 /* this is the minimal set of OM_MALLOC_* macros which must be defined */
 #define OM_MALLOC_MALLOC   malloc
 #define OM_MALLOC_REALLOC  realloc
