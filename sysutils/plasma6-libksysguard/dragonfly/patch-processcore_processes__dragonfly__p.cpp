--- processcore/processes_dragonfly_p.cpp.orig
+++ processcore/processes_dragonfly_p.cpp
@@ -6,6 +6,8 @@
 */
 
 #include "process.h"
+
+#include "memoryinfo_p.h"
 #include "processes_local_p.h"
 
 #include <KLocalizedString>
@@ -18,7 +20,6 @@
 #include <stdlib.h>
 #include <sys/param.h>
 #include <sys/resource.h>
-#include <sys/resourcevar.h>
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #include <sys/user.h>
@@ -81,8 +82,12 @@
     ps->setUserTime(LP(p, uticks) / 10000);
     ps->setSysTime((LP(p, sticks) + LP(p, iticks)) / 10000);
     ps->setNiceLevel(PP(p, nice));
-    ps->setVmSize(VP(p, map_size) / 1024); /* convert to KiB */
-    ps->setVmRSS(VP(p, prssize) * getpagesize() / 1024); /* convert to KiB */
+    MemoryFields fields;
+    fields.rss = VP(p, prssize) * getpagesize() / 1024; /* convert to KiB */
+    fields.lastUpdate = std::chrono::steady_clock::now();
+    ps->memoryInfo()->imprecise = fields;
+    ps->memoryInfo()->vmSize = VP(p, map_size) / 1024; /* convert to KiB */
+    ps->addChange(Process::Memory);
 
     // "idle","run","sleep","stop","zombie"
     switch (LP(p, stat)) {
@@ -106,7 +111,6 @@
 
 void ProcessesLocal::Private::readProcStatm(struct kinfo_proc *p, Process *process)
 {
-    process->setVmURSS(-1);
 }
 
 bool ProcessesLocal::Private::readProcCmdline(long pid, Process *process)
