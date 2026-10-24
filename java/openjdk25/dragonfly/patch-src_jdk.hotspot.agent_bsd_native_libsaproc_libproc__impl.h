--- src/jdk.hotspot.agent/bsd/native/libsaproc/libproc_impl.h.orig	2021-09-14 03:59:48 UTC
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/libproc_impl.h
@@ -79,11 +79,14 @@ typedef struct thread_command thread_com
 typedef struct dylib_command dylib_command;
 typedef struct symtab_command symtab_command;
 typedef struct nlist_64 nlist_64;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/ptrace.h>
 #include "salibelf.h"
 #endif //  __APPLE__
+#ifdef __DragonFly__
+#include <sys/procfs.h> /* for psaddr_t */
+#endif
 
 // data structures in this file mimic those of Solaris 8.0 - libproc's Pcontrol.h
 
