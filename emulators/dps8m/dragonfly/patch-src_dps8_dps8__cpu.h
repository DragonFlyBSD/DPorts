--- src/dps8/dps8_cpu.h.orig	2021-11-24 06:38:47 UTC
+++ src/dps8/dps8_cpu.h
@@ -2211,6 +2211,10 @@ int core_unlock_all(void);
 # if defined (BSD_ATOMICS)
 #  include <machine/atomic.h>
 
+#ifndef atomic_testandset_64
+#define	atomic_testandset_64	atomic_testandset_long
+#endif
+
 #  define LOCK_CORE_WORD(addr)                                          \
   do                                                                    \
     {                                                                   \
