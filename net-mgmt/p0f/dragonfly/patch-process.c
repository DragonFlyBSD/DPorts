--- process.c.intermediate	2014-03-02 11:18:34.048344000 +0000
+++ process.c
@@ -23,8 +23,8 @@
 #include <sys/time.h>
 #include <sys/stat.h>
 #include <net/if.h>
-#include <net/pfvar.h>
-#include <net/if_pflog.h>
+#include <net/pf/pfvar.h>
+#include <net/pf/if_pflog.h>
 
 #include "types.h"
 #include "config.h"
